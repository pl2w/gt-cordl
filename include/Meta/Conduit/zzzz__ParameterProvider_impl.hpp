#pragma once
// IWYU pragma private; include "Meta/Conduit/ParameterProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ParameterProvider_def.hpp"
#include "Meta/Conduit/zzzz__ConduitParameterValue_def.hpp"
#include "Meta/Conduit/zzzz__IParameterProvider_def.hpp"
#include "Meta/Conduit/zzzz__ParameterProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.get_AllParameterNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::Conduit::ParameterProvider::*)()>(&::Meta::Conduit::ParameterProvider::get_AllParameterNames)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e239dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"get_AllParameterNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.AddCustomType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::StringW, ::System::Type*)>(&::Meta::Conduit::ParameterProvider::AddCustomType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e23a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"AddCustomType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.AddParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::StringW, ::System::Object*)>(&::Meta::Conduit::ParameterProvider::AddParameter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e1d684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"AddParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.PopulateParametersFromNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Conduit::ParameterProvider::PopulateParametersFromNode)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x9e23ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateParametersFromNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.SetSpecializedParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::StringW, ::System::Type*)>(&::Meta::Conduit::ParameterProvider::SetSpecializedParameter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e24858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"SetSpecializedParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.PopulateParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Conduit::ConduitParameterValue>*)>(&::Meta::Conduit::ParameterProvider::PopulateParameters)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9e246c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Conduit::ConduitParameterValue>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.PopulateRoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Conduit::ParameterProvider::PopulateRoles)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9e248d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateRoles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.ContainsParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ParameterProvider::*)(::System::Reflection::ParameterInfo*, ::System::Text::StringBuilder*)>(&::Meta::Conduit::ParameterProvider::ContainsParameter)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e24a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"ContainsParameter", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::Conduit::ParameterProvider::*)(::System::Reflection::ParameterInfo*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, bool)>(&::Meta::Conduit::ParameterProvider::GetParameterValue)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9e24c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.GetParameterNamesOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::Conduit::ParameterProvider::*)(::System::Type*)>(&::Meta::Conduit::ParameterProvider::GetParameterNamesOfType)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x9e2506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterNamesOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.SupportedSpecializedParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ParameterProvider::*)(::System::Reflection::ParameterInfo*)>(&::Meta::Conduit::ParameterProvider::SupportedSpecializedParameter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e255e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.GetSpecializedParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::Conduit::ParameterProvider::*)(::System::Reflection::ParameterInfo*)>(&::Meta::Conduit::ParameterProvider::GetSpecializedParameter)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x9e25654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.GetParameterTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Meta::Conduit::ParameterProvider::*)(::StringW, ::StringW)>(&::Meta::Conduit::ParameterProvider::GetParameterTypes)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x9e2436c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterTypes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.PerfectTypeMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ParameterProvider::*)(::System::Type*, ::StringW)>(&::Meta::Conduit::ParameterProvider::PerfectTypeMatch)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9e25b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PerfectTypeMatch", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.GetActualParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ParameterProvider::*)(::System::Reflection::ParameterInfo*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, bool)>(&::Meta::Conduit::ParameterProvider::GetActualParameterName)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9e24d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetActualParameterName", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ParameterProvider::*)()>(&::Meta::Conduit::ParameterProvider::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e25ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider::*)()>(&::Meta::Conduit::ParameterProvider::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9e1d414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Meta::Conduit::ParameterProvider::__cordl_internal_get_ActualParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActualParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Meta::Conduit::ParameterProvider::__cordl_internal_get_ActualParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActualParameters;
}
constexpr void Meta::Conduit::ParameterProvider::__cordl_internal_set_ActualParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActualParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Conduit::ParameterProvider::__cordl_internal_get__parameterToRoleMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterToRoleMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Conduit::ParameterProvider::__cordl_internal_get__parameterToRoleMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterToRoleMap;
}
constexpr void Meta::Conduit::ParameterProvider::__cordl_internal_set__parameterToRoleMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parameterToRoleMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*& Meta::Conduit::ParameterProvider::__cordl_internal_get__parametersOfType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parametersOfType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>* const& Meta::Conduit::ParameterProvider::__cordl_internal_get__parametersOfType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parametersOfType;
}
constexpr void Meta::Conduit::ParameterProvider::__cordl_internal_set__parametersOfType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parametersOfType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*& Meta::Conduit::ParameterProvider::__cordl_internal_get__specializedParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____specializedParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* const& Meta::Conduit::ParameterProvider::__cordl_internal_get__specializedParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____specializedParameters;
}
constexpr void Meta::Conduit::ParameterProvider::__cordl_internal_set__specializedParameters(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____specializedParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*& Meta::Conduit::ParameterProvider::__cordl_internal_get__customTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* const& Meta::Conduit::ParameterProvider::__cordl_internal_get__customTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customTypes;
}
constexpr void Meta::Conduit::ParameterProvider::__cordl_internal_set__customTypes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customTypes = value;
}
inline void Meta::Conduit::ParameterProvider::setStaticF_BuiltInTypes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*, "BuiltInTypes", ::Meta::Conduit::ParameterProvider*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>* Meta::Conduit::ParameterProvider::getStaticF_BuiltInTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*, "BuiltInTypes", ::Meta::Conduit::ParameterProvider*>();
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::Conduit::ParameterProvider::get_AllParameterNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"get_AllParameterNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void Meta::Conduit::ParameterProvider::AddCustomType(::StringW  name, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"AddCustomType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline void Meta::Conduit::ParameterProvider::AddParameter(::StringW  parameterName, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"AddParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterName, value);
}
inline void Meta::Conduit::ParameterProvider::PopulateParametersFromNode(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateParametersFromNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseNode);
}
inline void Meta::Conduit::ParameterProvider::SetSpecializedParameter(::StringW  reservedParameterName, ::System::Type*  parameterType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"SetSpecializedParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reservedParameterName, parameterType);
}
inline void Meta::Conduit::ParameterProvider::PopulateParameters(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Conduit::ConduitParameterValue>*  actualParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Conduit::ConduitParameterValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actualParameters);
}
inline void Meta::Conduit::ParameterProvider::PopulateRoles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterToRoleMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PopulateRoles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterToRoleMap);
}
inline bool Meta::Conduit::ParameterProvider::ContainsParameter(::System::Reflection::ParameterInfo*  parameter, ::System::Text::StringBuilder*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"ContainsParameter", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parameter, log);
}
inline ::System::Object* Meta::Conduit::ParameterProvider::GetParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formalParameter, parameterMap, relaxed);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::Conduit::ParameterProvider::GetParameterNamesOfType(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterNamesOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, targetType);
}
inline bool Meta::Conduit::ParameterProvider::SupportedSpecializedParameter(::System::Reflection::ParameterInfo*  formalParameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formalParameter);
}
inline ::System::Object* Meta::Conduit::ParameterProvider::GetSpecializedParameter(::System::Reflection::ParameterInfo*  formalParameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formalParameter);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Meta::Conduit::ParameterProvider::GetParameterTypes(::StringW  typeString, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetParameterTypes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, typeString, value);
}
inline bool Meta::Conduit::ParameterProvider::PerfectTypeMatch(::System::Type*  targetType, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"PerfectTypeMatch", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetType, value);
}
inline ::StringW Meta::Conduit::ParameterProvider::GetActualParameterName(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {"GetActualParameterName", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, formalParameter, parameterMap, relaxed);
}
inline ::StringW Meta::Conduit::ParameterProvider::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ParameterProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ParameterProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Conduit::ParameterProvider* Meta::Conduit::ParameterProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ParameterProvider*>());
}
/// @brief Convert operator to "::Meta::Conduit::IParameterProvider"
constexpr  Meta::Conduit::ParameterProvider::operator ::Meta::Conduit::IParameterProvider*() noexcept {
return static_cast<::Meta::Conduit::IParameterProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IParameterProvider"
constexpr ::Meta::Conduit::IParameterProvider* Meta::Conduit::ParameterProvider::i___Meta__Conduit__IParameterProvider() noexcept {
return static_cast<::Meta::Conduit::IParameterProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ParameterProvider::ParameterProvider()   {
}
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ParameterProvider___c__DisplayClass24_0::*)()>(&::Meta::Conduit::ParameterProvider___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e25b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0._GetParameterTypes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ParameterProvider___c__DisplayClass24_0::*)(::System::Type*)>(&::Meta::Conduit::ParameterProvider___c__DisplayClass24_0::_GetParameterTypes_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e273cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*>(),
                        {"<GetParameterTypes>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Conduit::ParameterProvider*& Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Conduit::ParameterProvider* const& Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_set___4__this(::Meta::Conduit::ParameterProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Meta::Conduit::ParameterProvider___c__DisplayClass24_0::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void Meta::Conduit::ParameterProvider___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Conduit::ParameterProvider___c__DisplayClass24_0::_GetParameterTypes_b__0(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*>(),
                        {"<GetParameterTypes>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0* Meta::Conduit::ParameterProvider___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0::ParameterProvider___c__DisplayClass24_0()   {
}
