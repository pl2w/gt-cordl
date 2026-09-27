#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode_ValueEnumerator.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_ValueEnumerator_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSONNode_ValueEnumerator::*)(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::GlobalNamespace::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa5897f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSONNode_ValueEnumerator::*)(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>)>(&::GlobalNamespace::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa589868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSONNode_ValueEnumerator::*)(::GlobalNamespace::JSONNode_Enumerator)>(&::GlobalNamespace::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5898e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::JSONNode_Enumerator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::JSONNode_ValueEnumerator::*)()>(&::GlobalNamespace::JSONNode_ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa589900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JSONNode_ValueEnumerator::*)()>(&::GlobalNamespace::JSONNode_ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa589944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSONNode_ValueEnumerator.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JSONNode_ValueEnumerator (::GlobalNamespace::JSONNode_ValueEnumerator::*)()>(&::GlobalNamespace::JSONNode_ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa589948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JSONNode_ValueEnumerator::_ctor(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aArrayEnum);
}
inline void GlobalNamespace::JSONNode_ValueEnumerator::_ctor(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aDictEnum);
}
inline void GlobalNamespace::JSONNode_ValueEnumerator::_ctor(::GlobalNamespace::JSONNode_Enumerator  aEnumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::JSONNode_Enumerator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aEnumerator);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::JSONNode_ValueEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(*this, ___internal_method);
}
inline bool GlobalNamespace::JSONNode_ValueEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::JSONNode_ValueEnumerator GlobalNamespace::JSONNode_ValueEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSONNode_ValueEnumerator>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JSONNode_ValueEnumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::JSONNode_Enumerator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator(::GlobalNamespace::JSONNode_Enumerator  m_Enumerator) noexcept  {
this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator()   {
}
