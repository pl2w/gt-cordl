#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalVariable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalVariable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalVariable_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocalVariable::*)()>(&::UnityEngine::Localization::LocalVariable::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalVariable::*)(::StringW)>(&::UnityEngine::Localization::LocalVariable::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable.get_Variable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* (::UnityEngine::Localization::LocalVariable::*)()>(&::UnityEngine::Localization::LocalVariable::get_Variable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"get_Variable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable.set_Variable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalVariable::*)(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::LocalVariable::set_Variable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"set_Variable", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalVariable::*)()>(&::UnityEngine::Localization::LocalVariable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::LocalVariable::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::LocalVariable::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Localization::LocalVariable::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*& UnityEngine::Localization::LocalVariable::__cordl_internal_get__Variable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Variable_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* const& UnityEngine::Localization::LocalVariable::__cordl_internal_get__Variable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Variable_k__BackingField;
}
constexpr void UnityEngine::Localization::LocalVariable::__cordl_internal_set__Variable_k__BackingField(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Variable_k__BackingField = value;
}
inline ::StringW UnityEngine::Localization::LocalVariable::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalVariable::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::LocalVariable::get_Variable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"get_Variable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalVariable::set_Variable(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {"set_Variable", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalVariable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalVariable* UnityEngine::Localization::LocalVariable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalVariable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalVariable::LocalVariable()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable_UxmlSerializedData.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::LocalVariable_UxmlSerializedData::Register)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb014fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable_UxmlSerializedData.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalVariable_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalVariable_UxmlSerializedData::CreateInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb015250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable_UxmlSerializedData.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalVariable_UxmlSerializedData::*)(::System::Object*)>(&::UnityEngine::Localization::LocalVariable_UxmlSerializedData::Deserialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb0152a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalVariable_UxmlSerializedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalVariable_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalVariable_UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb0154a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlSerializedData*& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Variable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variable;
}
constexpr ::UnityEngine::UIElements::UxmlSerializedData* const& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Variable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variable;
}
constexpr void UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_set_Variable(::UnityEngine::UIElements::UxmlSerializedData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variable = value;
}
constexpr ::StringW& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Variable_UxmlAttributeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variable_UxmlAttributeFlags;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Variable_UxmlAttributeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variable_UxmlAttributeFlags;
}
constexpr void UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_set_Variable_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variable_UxmlAttributeFlags = value;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Name_UxmlAttributeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name_UxmlAttributeFlags;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_get_Name_UxmlAttributeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name_UxmlAttributeFlags;
}
constexpr void UnityEngine::Localization::LocalVariable_UxmlSerializedData::__cordl_internal_set_Name_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name_UxmlAttributeFlags = value;
}
inline void UnityEngine::Localization::LocalVariable_UxmlSerializedData::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalVariable_UxmlSerializedData::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalVariable_UxmlSerializedData::Deserialize(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::Localization::LocalVariable_UxmlSerializedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalVariable_UxmlSerializedData* UnityEngine::Localization::LocalVariable_UxmlSerializedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalVariable_UxmlSerializedData::LocalVariable_UxmlSerializedData()   {
}
