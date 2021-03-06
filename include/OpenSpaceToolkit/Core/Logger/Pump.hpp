////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Open Space Toolkit ▸ Core
/// @file           OpenSpaceToolkit/Core/Logger/Pump.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __OpenSpaceToolkit_Core_Logger_Pump__
#define __OpenSpaceToolkit_Core_Logger_Pump__

#include <OpenSpaceToolkit/Core/Types/Unique.hpp>
#include <OpenSpaceToolkit/Core/Types/Integer.hpp>
#include <OpenSpaceToolkit/Core/Types/String.hpp>
#include <OpenSpaceToolkit/Core/Logger/Severity.hpp>
#include <OpenSpaceToolkit/Core/Logger/Source.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ostk
{
namespace core
{
namespace logger
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using ostk::core::types::Unique ;
using ostk::core::types::Integer ;
using ostk::core::types::String ;
using ostk::core::logger::Severity ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @brief                      Log pump

class Pump
{

    public:

        using StreamManipulator = std::ostream&(std::ostream&) ;

                                Pump                                        (   const   Severity&                   aSeverity,
                                                                                const   Integer&                    aLine,
                                                                                const   String&                     aFile,
                                                                                const   String&                     aFunction,
                                                                                        Source*                     aSource                                     ) ;

                                Pump                                        (   const   Pump&                       aPump                                       ) = delete ;

                                Pump                                        (           Pump&&                      aPump                                       ) ;

                                ~Pump                                       ( ) ;

        Pump&                   operator =                                  (   const   Pump&                       aPump                                       ) = delete ;

        template <class T>
        Pump&                   operator <<                                 (   const   T&                          anObject                                    )
        {

            if (this->canAccessStream())
            {
                this->accessStream() << anObject ;
            }

            return *this ;

        }

        Pump&                   operator <<                                 (           StreamManipulator           aStreamManipulator                          )
        {

            if (this->canAccessStream())
            {
                this->accessStream() << aStreamManipulator ;
            }

            return *this ;

        }

    private:

        class Impl ;

        Unique<Pump::Impl>      implPtr_ ;

        bool                    canAccessStream                             ( ) const ;

        std::ostream&           accessStream                                ( ) ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
