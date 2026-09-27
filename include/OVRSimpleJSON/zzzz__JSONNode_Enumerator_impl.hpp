#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_Type_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_Type_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JSONNode_Enumerator.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JSONNode_Enumerator::*)()>(&::GlobalNamespace::JSONNode_Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa589608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSONNode_Enumerator::*)(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::GlobalNamespace::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa589618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSONNode_Enumerator::*)(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>)>(&::GlobalNamespace::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa589654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*> (::GlobalNamespace::JSONNode_Enumerator::*)()>(&::GlobalNamespace::JSONNode_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa589694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JSONNode_Enumerator::*)()>(&::GlobalNamespace::JSONNode_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa589764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::JSONNode_Enumerator::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::JSONNode_Enumerator::_ctor(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aArrayEnum);
}
inline void GlobalNamespace::JSONNode_Enumerator::_ctor(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aDictEnum);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*> GlobalNamespace::JSONNode_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>(*this, ___internal_method);
}
inline bool GlobalNamespace::JSONNode_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::Enumerator_JSONNode_Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Object", ty: "::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Array", ty: "::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JSONNode_Enumerator::JSONNode_Enumerator(::GlobalNamespace::Enumerator_JSONNode_Type  type, ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  m_Object, ::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  m_Array) noexcept  {
this->type = type;
this->m_Object = m_Object;
this->m_Array = m_Array;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JSONNode_Enumerator::JSONNode_Enumerator()   {
}
