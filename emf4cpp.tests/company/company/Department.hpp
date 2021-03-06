// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/Department.hpp
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

#ifndef COMPANY_DEPARTMENT_HPP
#define COMPANY_DEPARTMENT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <company/dllCompany.hpp>
#include <company_forward.hpp>

#include <ecore_forward.hpp>

#include "CompanyPackage.hpp"

/*PROTECTED REGION ID(Department_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace company
{

class EXPORT_COMPANY_DLL Department : public virtual ::ecore::EObject
{
public:
    Department();

    virtual ~Department();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getNumber () const;
    virtual void setNumber (::ecore::EInt _number);

    // References
    virtual const ::ecorecpp::mapping::EList< ::company::Employee_ptr >& getEmployees () const;
    virtual ::ecorecpp::mapping::EList< ::company::Employee_ptr >& getEmployees ();

    virtual ::company::Employee_ptr getManager () const;
    virtual void setManager (::company::Employee_ptr _manager);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CompanyPackage::DEPARTMENT;

    /*PROTECTED REGION ID(Department) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(DepartmentImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Department_ptr _this()
    {   return Department_ptr(this);}

    // Attributes

    ::ecore::EInt m_number;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::company::Employee_ptr >> m_employees;

    ::company::Employee_ptr m_manager;

};

}
 // company

#endif // COMPANY_DEPARTMENT_HPP

