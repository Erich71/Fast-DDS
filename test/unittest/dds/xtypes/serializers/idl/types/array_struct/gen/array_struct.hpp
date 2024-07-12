// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file array_struct.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__ARRAY_STRUCT_HPP
#define FAST_DDS_GENERATED__ARRAY_STRUCT_HPP

#include <array>
#include <cstdint>
#include <string>
#include <utility>
#include <fastcdr/cdr/fixed_size_string.hpp>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(ARRAY_STRUCT_SOURCE)
#define ARRAY_STRUCT_DllAPI __declspec( dllexport )
#else
#define ARRAY_STRUCT_DllAPI __declspec( dllimport )
#endif // ARRAY_STRUCT_SOURCE
#else
#define ARRAY_STRUCT_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ARRAY_STRUCT_DllAPI
#endif // _WIN32

/*!
 * @brief This class represents the structure NestedArrayElement defined by the user in the IDL file.
 * @ingroup array_struct
 */
class NestedArrayElement
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NestedArrayElement()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NestedArrayElement()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NestedArrayElement that will be copied.
     */
    eProsima_user_DllExport NestedArrayElement(
            const NestedArrayElement& x)
    {
                    m_my_string = x.m_my_string;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NestedArrayElement that will be copied.
     */
    eProsima_user_DllExport NestedArrayElement(
            NestedArrayElement&& x) noexcept
    {
        m_my_string = std::move(x.m_my_string);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NestedArrayElement that will be copied.
     */
    eProsima_user_DllExport NestedArrayElement& operator =(
            const NestedArrayElement& x)
    {

                    m_my_string = x.m_my_string;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NestedArrayElement that will be copied.
     */
    eProsima_user_DllExport NestedArrayElement& operator =(
            NestedArrayElement&& x) noexcept
    {

        m_my_string = std::move(x.m_my_string);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x NestedArrayElement object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NestedArrayElement& x) const
    {
        return (m_my_string == x.m_my_string);
    }

    /*!
     * @brief Comparison operator.
     * @param x NestedArrayElement object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NestedArrayElement& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function copies the value in member my_string
     * @param _my_string New value to be copied in member my_string
     */
    eProsima_user_DllExport void my_string(
            const std::string& _my_string)
    {
        m_my_string = _my_string;
    }

    /*!
     * @brief This function moves the value in member my_string
     * @param _my_string New value to be moved in member my_string
     */
    eProsima_user_DllExport void my_string(
            std::string&& _my_string)
    {
        m_my_string = std::move(_my_string);
    }

    /*!
     * @brief This function returns a constant reference to member my_string
     * @return Constant reference to member my_string
     */
    eProsima_user_DllExport const std::string& my_string() const
    {
        return m_my_string;
    }

    /*!
     * @brief This function returns a reference to member my_string
     * @return Reference to member my_string
     */
    eProsima_user_DllExport std::string& my_string()
    {
        return m_my_string;
    }



private:

    std::string m_my_string;

};
/*!
 * @brief This class represents the structure ComplexArrayElement defined by the user in the IDL file.
 * @ingroup array_struct
 */
class ComplexArrayElement
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ComplexArrayElement()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ComplexArrayElement()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ComplexArrayElement that will be copied.
     */
    eProsima_user_DllExport ComplexArrayElement(
            const ComplexArrayElement& x)
    {
                    m_my_number = x.m_my_number;

                    m_my_boolean = x.m_my_boolean;

                    m_my_nested_element = x.m_my_nested_element;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ComplexArrayElement that will be copied.
     */
    eProsima_user_DllExport ComplexArrayElement(
            ComplexArrayElement&& x) noexcept
    {
        m_my_number = x.m_my_number;
        m_my_boolean = x.m_my_boolean;
        m_my_nested_element = std::move(x.m_my_nested_element);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ComplexArrayElement that will be copied.
     */
    eProsima_user_DllExport ComplexArrayElement& operator =(
            const ComplexArrayElement& x)
    {

                    m_my_number = x.m_my_number;

                    m_my_boolean = x.m_my_boolean;

                    m_my_nested_element = x.m_my_nested_element;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ComplexArrayElement that will be copied.
     */
    eProsima_user_DllExport ComplexArrayElement& operator =(
            ComplexArrayElement&& x) noexcept
    {

        m_my_number = x.m_my_number;
        m_my_boolean = x.m_my_boolean;
        m_my_nested_element = std::move(x.m_my_nested_element);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x ComplexArrayElement object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ComplexArrayElement& x) const
    {
        return (m_my_number == x.m_my_number &&
           m_my_boolean == x.m_my_boolean &&
           m_my_nested_element == x.m_my_nested_element);
    }

    /*!
     * @brief Comparison operator.
     * @param x ComplexArrayElement object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ComplexArrayElement& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function sets a value in member my_number
     * @param _my_number New value for member my_number
     */
    eProsima_user_DllExport void my_number(
            int32_t _my_number)
    {
        m_my_number = _my_number;
    }

    /*!
     * @brief This function returns the value of member my_number
     * @return Value of member my_number
     */
    eProsima_user_DllExport int32_t my_number() const
    {
        return m_my_number;
    }

    /*!
     * @brief This function returns a reference to member my_number
     * @return Reference to member my_number
     */
    eProsima_user_DllExport int32_t& my_number()
    {
        return m_my_number;
    }


    /*!
     * @brief This function sets a value in member my_boolean
     * @param _my_boolean New value for member my_boolean
     */
    eProsima_user_DllExport void my_boolean(
            bool _my_boolean)
    {
        m_my_boolean = _my_boolean;
    }

    /*!
     * @brief This function returns the value of member my_boolean
     * @return Value of member my_boolean
     */
    eProsima_user_DllExport bool my_boolean() const
    {
        return m_my_boolean;
    }

    /*!
     * @brief This function returns a reference to member my_boolean
     * @return Reference to member my_boolean
     */
    eProsima_user_DllExport bool& my_boolean()
    {
        return m_my_boolean;
    }


    /*!
     * @brief This function copies the value in member my_nested_element
     * @param _my_nested_element New value to be copied in member my_nested_element
     */
    eProsima_user_DllExport void my_nested_element(
            const NestedArrayElement& _my_nested_element)
    {
        m_my_nested_element = _my_nested_element;
    }

    /*!
     * @brief This function moves the value in member my_nested_element
     * @param _my_nested_element New value to be moved in member my_nested_element
     */
    eProsima_user_DllExport void my_nested_element(
            NestedArrayElement&& _my_nested_element)
    {
        m_my_nested_element = std::move(_my_nested_element);
    }

    /*!
     * @brief This function returns a constant reference to member my_nested_element
     * @return Constant reference to member my_nested_element
     */
    eProsima_user_DllExport const NestedArrayElement& my_nested_element() const
    {
        return m_my_nested_element;
    }

    /*!
     * @brief This function returns a reference to member my_nested_element
     * @return Reference to member my_nested_element
     */
    eProsima_user_DllExport NestedArrayElement& my_nested_element()
    {
        return m_my_nested_element;
    }



private:

    int32_t m_my_number{0};
    bool m_my_boolean{false};
    NestedArrayElement m_my_nested_element;

};
/*!
 * @brief This class represents the structure ArrayStruct defined by the user in the IDL file.
 * @ingroup array_struct
 */
class ArrayStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ArrayStruct()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ArrayStruct()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct(
            const ArrayStruct& x)
    {
                    m_my_basic_array = x.m_my_basic_array;

                    m_my_multidimensional_array = x.m_my_multidimensional_array;

                    m_my_complex_array = x.m_my_complex_array;

                    m_my_multidimensional_complex_array = x.m_my_multidimensional_complex_array;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct(
            ArrayStruct&& x) noexcept
    {
        m_my_basic_array = std::move(x.m_my_basic_array);
        m_my_multidimensional_array = std::move(x.m_my_multidimensional_array);
        m_my_complex_array = std::move(x.m_my_complex_array);
        m_my_multidimensional_complex_array = std::move(x.m_my_multidimensional_complex_array);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct& operator =(
            const ArrayStruct& x)
    {

                    m_my_basic_array = x.m_my_basic_array;

                    m_my_multidimensional_array = x.m_my_multidimensional_array;

                    m_my_complex_array = x.m_my_complex_array;

                    m_my_multidimensional_complex_array = x.m_my_multidimensional_complex_array;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ArrayStruct that will be copied.
     */
    eProsima_user_DllExport ArrayStruct& operator =(
            ArrayStruct&& x) noexcept
    {

        m_my_basic_array = std::move(x.m_my_basic_array);
        m_my_multidimensional_array = std::move(x.m_my_multidimensional_array);
        m_my_complex_array = std::move(x.m_my_complex_array);
        m_my_multidimensional_complex_array = std::move(x.m_my_multidimensional_complex_array);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x ArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ArrayStruct& x) const
    {
        return (m_my_basic_array == x.m_my_basic_array &&
           m_my_multidimensional_array == x.m_my_multidimensional_array &&
           m_my_complex_array == x.m_my_complex_array &&
           m_my_multidimensional_complex_array == x.m_my_multidimensional_complex_array);
    }

    /*!
     * @brief Comparison operator.
     * @param x ArrayStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ArrayStruct& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function copies the value in member my_basic_array
     * @param _my_basic_array New value to be copied in member my_basic_array
     */
    eProsima_user_DllExport void my_basic_array(
            const std::array<int32_t, 10>& _my_basic_array)
    {
        m_my_basic_array = _my_basic_array;
    }

    /*!
     * @brief This function moves the value in member my_basic_array
     * @param _my_basic_array New value to be moved in member my_basic_array
     */
    eProsima_user_DllExport void my_basic_array(
            std::array<int32_t, 10>&& _my_basic_array)
    {
        m_my_basic_array = std::move(_my_basic_array);
    }

    /*!
     * @brief This function returns a constant reference to member my_basic_array
     * @return Constant reference to member my_basic_array
     */
    eProsima_user_DllExport const std::array<int32_t, 10>& my_basic_array() const
    {
        return m_my_basic_array;
    }

    /*!
     * @brief This function returns a reference to member my_basic_array
     * @return Reference to member my_basic_array
     */
    eProsima_user_DllExport std::array<int32_t, 10>& my_basic_array()
    {
        return m_my_basic_array;
    }


    /*!
     * @brief This function copies the value in member my_multidimensional_array
     * @param _my_multidimensional_array New value to be copied in member my_multidimensional_array
     */
    eProsima_user_DllExport void my_multidimensional_array(
            const std::array<std::array<std::array<int32_t, 10>, 10>, 10>& _my_multidimensional_array)
    {
        m_my_multidimensional_array = _my_multidimensional_array;
    }

    /*!
     * @brief This function moves the value in member my_multidimensional_array
     * @param _my_multidimensional_array New value to be moved in member my_multidimensional_array
     */
    eProsima_user_DllExport void my_multidimensional_array(
            std::array<std::array<std::array<int32_t, 10>, 10>, 10>&& _my_multidimensional_array)
    {
        m_my_multidimensional_array = std::move(_my_multidimensional_array);
    }

    /*!
     * @brief This function returns a constant reference to member my_multidimensional_array
     * @return Constant reference to member my_multidimensional_array
     */
    eProsima_user_DllExport const std::array<std::array<std::array<int32_t, 10>, 10>, 10>& my_multidimensional_array() const
    {
        return m_my_multidimensional_array;
    }

    /*!
     * @brief This function returns a reference to member my_multidimensional_array
     * @return Reference to member my_multidimensional_array
     */
    eProsima_user_DllExport std::array<std::array<std::array<int32_t, 10>, 10>, 10>& my_multidimensional_array()
    {
        return m_my_multidimensional_array;
    }


    /*!
     * @brief This function copies the value in member my_complex_array
     * @param _my_complex_array New value to be copied in member my_complex_array
     */
    eProsima_user_DllExport void my_complex_array(
            const std::array<ComplexArrayElement, 10>& _my_complex_array)
    {
        m_my_complex_array = _my_complex_array;
    }

    /*!
     * @brief This function moves the value in member my_complex_array
     * @param _my_complex_array New value to be moved in member my_complex_array
     */
    eProsima_user_DllExport void my_complex_array(
            std::array<ComplexArrayElement, 10>&& _my_complex_array)
    {
        m_my_complex_array = std::move(_my_complex_array);
    }

    /*!
     * @brief This function returns a constant reference to member my_complex_array
     * @return Constant reference to member my_complex_array
     */
    eProsima_user_DllExport const std::array<ComplexArrayElement, 10>& my_complex_array() const
    {
        return m_my_complex_array;
    }

    /*!
     * @brief This function returns a reference to member my_complex_array
     * @return Reference to member my_complex_array
     */
    eProsima_user_DllExport std::array<ComplexArrayElement, 10>& my_complex_array()
    {
        return m_my_complex_array;
    }


    /*!
     * @brief This function copies the value in member my_multidimensional_complex_array
     * @param _my_multidimensional_complex_array New value to be copied in member my_multidimensional_complex_array
     */
    eProsima_user_DllExport void my_multidimensional_complex_array(
            const std::array<std::array<ComplexArrayElement, 10>, 10>& _my_multidimensional_complex_array)
    {
        m_my_multidimensional_complex_array = _my_multidimensional_complex_array;
    }

    /*!
     * @brief This function moves the value in member my_multidimensional_complex_array
     * @param _my_multidimensional_complex_array New value to be moved in member my_multidimensional_complex_array
     */
    eProsima_user_DllExport void my_multidimensional_complex_array(
            std::array<std::array<ComplexArrayElement, 10>, 10>&& _my_multidimensional_complex_array)
    {
        m_my_multidimensional_complex_array = std::move(_my_multidimensional_complex_array);
    }

    /*!
     * @brief This function returns a constant reference to member my_multidimensional_complex_array
     * @return Constant reference to member my_multidimensional_complex_array
     */
    eProsima_user_DllExport const std::array<std::array<ComplexArrayElement, 10>, 10>& my_multidimensional_complex_array() const
    {
        return m_my_multidimensional_complex_array;
    }

    /*!
     * @brief This function returns a reference to member my_multidimensional_complex_array
     * @return Reference to member my_multidimensional_complex_array
     */
    eProsima_user_DllExport std::array<std::array<ComplexArrayElement, 10>, 10>& my_multidimensional_complex_array()
    {
        return m_my_multidimensional_complex_array;
    }



private:

    std::array<int32_t, 10> m_my_basic_array{0};
    std::array<std::array<std::array<int32_t, 10>, 10>, 10> m_my_multidimensional_array{ {{ {{0}} }} };
    std::array<ComplexArrayElement, 10> m_my_complex_array;
    std::array<std::array<ComplexArrayElement, 10>, 10> m_my_multidimensional_complex_array;

};

#endif // _FAST_DDS_GENERATED_ARRAY_STRUCT_HPP_


