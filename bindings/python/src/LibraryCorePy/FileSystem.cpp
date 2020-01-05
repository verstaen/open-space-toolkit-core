////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ Core
/// @file           bindings/python/src/LibraryCorePy/FileSystem.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <LibraryCorePy/FileSystem/SymbolicLink.cpp>
#include <LibraryCorePy/FileSystem/Directory.cpp>
#include <LibraryCorePy/FileSystem/File.cpp>
#include <LibraryCorePy/FileSystem/Path.cpp>
#include <LibraryCorePy/FileSystem/PermissionSet.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryCorePy_FileSystem                    ( )
{

    boost::python::object module(boost::python::handle<>(boost::python::borrowed(PyImport_AddModule("library.core.filesystem")))) ;

    boost::python::scope().attr("filesystem") = module ;

    boost::python::scope scope = module ;

    LibraryCorePy_FileSystem_PermissionSet() ;
    LibraryCorePy_FileSystem_Path() ;
    LibraryCorePy_FileSystem_File() ;
    LibraryCorePy_FileSystem_Directory() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
