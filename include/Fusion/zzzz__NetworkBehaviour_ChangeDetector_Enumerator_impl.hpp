#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_Enumerator.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Enumerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::*)()>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f82708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::*)(::ArrayW<::StringW>, int32_t)>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f82668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::*)()>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8273c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::*)()>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f82748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::_ctor(::ArrayW<::StringW>  changed, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, changed, count);
}
inline void GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_changed", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::ChangeDetector_NetworkBehaviour_Enumerator(::ArrayW<::StringW>  _changed, int32_t  _count, int32_t  _current) noexcept  {
this->_changed = _changed;
this->_count = _count;
this->_current = _current;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator::ChangeDetector_NetworkBehaviour_Enumerator()   {
}
