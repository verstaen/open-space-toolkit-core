////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/Error/Runtime/Wrong.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Core/Error/Runtime/Wrong.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace core
{
namespace error
{
namespace runtime
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                Wrong::Wrong                                (   const   String&                     aVariableName                               )
                                :   RuntimeError("{" + aVariableName + "} is wrong.")
{
    
}

//                                 Wrong::Wrong                                (   const   String&                     aScope,
//                                                                                 const   String&                     aVariableName                               )
//                                 :   RuntimeError(aScope, "{" + aVariableName + "} is wrong.")
// {
    
// }

                                Wrong::~Wrong                               ( )
{

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////