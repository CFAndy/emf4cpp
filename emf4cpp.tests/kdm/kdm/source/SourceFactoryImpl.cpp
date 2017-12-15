// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceFactoryImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <kdm/source/SourceFactory.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/source/SourceRegion.hpp>
#include <kdm/source/InventoryModel.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>
#include <kdm/source/InventoryItem.hpp>
#include <kdm/source/SourceFile.hpp>
#include <kdm/source/Image.hpp>
#include <kdm/source/ResourceDescription.hpp>
#include <kdm/source/Configuration.hpp>
#include <kdm/source/InventoryContainer.hpp>
#include <kdm/source/Directory.hpp>
#include <kdm/source/Project.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>
#include <kdm/source/BinaryFile.hpp>
#include <kdm/source/ExecutableFile.hpp>
#include <kdm/source/DependsOn.hpp>
#include <kdm/source/InventoryElement.hpp>
#include <kdm/source/InventoryRelationship.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::source;

SourceFactory::SourceFactory()
{
}

::ecore::EObject_ptr SourceFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case SourcePackage::SOURCEREF:
        return createSourceRef();
    case SourcePackage::SOURCEREGION:
        return createSourceRegion();
    case SourcePackage::INVENTORYMODEL:
        return createInventoryModel();
    case SourcePackage::ABSTRACTINVENTORYELEMENT:
        return createAbstractInventoryElement();
    case SourcePackage::INVENTORYITEM:
        return createInventoryItem();
    case SourcePackage::SOURCEFILE:
        return createSourceFile();
    case SourcePackage::IMAGE:
        return createImage();
    case SourcePackage::RESOURCEDESCRIPTION:
        return createResourceDescription();
    case SourcePackage::CONFIGURATION:
        return createConfiguration();
    case SourcePackage::INVENTORYCONTAINER:
        return createInventoryContainer();
    case SourcePackage::DIRECTORY:
        return createDirectory();
    case SourcePackage::PROJECT:
        return createProject();
    case SourcePackage::ABSTRACTINVENTORYRELATIONSHIP:
        return createAbstractInventoryRelationship();
    case SourcePackage::BINARYFILE:
        return createBinaryFile();
    case SourcePackage::EXECUTABLEFILE:
        return createExecutableFile();
    case SourcePackage::DEPENDSON:
        return createDependsOn();
    case SourcePackage::INVENTORYELEMENT:
        return createInventoryElement();
    case SourcePackage::INVENTORYRELATIONSHIP:
        return createInventoryRelationship();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject SourceFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString SourceFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

SourceRef_ptr SourceFactory::createSourceRef()
{
    return boost::intrusive_ptr < SourceRef > (new SourceRef);
}
SourceRegion_ptr SourceFactory::createSourceRegion()
{
    return boost::intrusive_ptr < SourceRegion > (new SourceRegion);
}
InventoryModel_ptr SourceFactory::createInventoryModel()
{
    return boost::intrusive_ptr < InventoryModel > (new InventoryModel);
}
AbstractInventoryElement_ptr SourceFactory::createAbstractInventoryElement()
{
    return boost::intrusive_ptr < AbstractInventoryElement
            > (new AbstractInventoryElement);
}
InventoryItem_ptr SourceFactory::createInventoryItem()
{
    return boost::intrusive_ptr < InventoryItem > (new InventoryItem);
}
SourceFile_ptr SourceFactory::createSourceFile()
{
    return boost::intrusive_ptr < SourceFile > (new SourceFile);
}
Image_ptr SourceFactory::createImage()
{
    return boost::intrusive_ptr < Image > (new Image);
}
ResourceDescription_ptr SourceFactory::createResourceDescription()
{
    return boost::intrusive_ptr < ResourceDescription
            > (new ResourceDescription);
}
Configuration_ptr SourceFactory::createConfiguration()
{
    return boost::intrusive_ptr < Configuration > (new Configuration);
}
InventoryContainer_ptr SourceFactory::createInventoryContainer()
{
    return boost::intrusive_ptr < InventoryContainer > (new InventoryContainer);
}
Directory_ptr SourceFactory::createDirectory()
{
    return boost::intrusive_ptr < Directory > (new Directory);
}
Project_ptr SourceFactory::createProject()
{
    return boost::intrusive_ptr < Project > (new Project);
}
AbstractInventoryRelationship_ptr SourceFactory::createAbstractInventoryRelationship()
{
    return boost::intrusive_ptr < AbstractInventoryRelationship
            > (new AbstractInventoryRelationship);
}
BinaryFile_ptr SourceFactory::createBinaryFile()
{
    return boost::intrusive_ptr < BinaryFile > (new BinaryFile);
}
ExecutableFile_ptr SourceFactory::createExecutableFile()
{
    return boost::intrusive_ptr < ExecutableFile > (new ExecutableFile);
}
DependsOn_ptr SourceFactory::createDependsOn()
{
    return boost::intrusive_ptr < DependsOn > (new DependsOn);
}
InventoryElement_ptr SourceFactory::createInventoryElement()
{
    return boost::intrusive_ptr < InventoryElement > (new InventoryElement);
}
InventoryRelationship_ptr SourceFactory::createInventoryRelationship()
{
    return boost::intrusive_ptr < InventoryRelationship
            > (new InventoryRelationship);
}

