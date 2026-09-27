#pragma once
// IWYU pragma private; include "Fusion/BitSet64_Enumerator.hpp"
#include "Fusion/zzzz__BitSet64_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet64_Enumerator::*)(uint64_t*)>(&::GlobalNamespace::BitSet64_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitSet64_Enumerator::*)()>(&::GlobalNamespace::BitSet64_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f97de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet64_Enumerator::*)()>(&::GlobalNamespace::BitSet64_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitSet64_Enumerator::*)()>(&::GlobalNamespace::BitSet64_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f97df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BitSet64_Enumerator::*)()>(&::GlobalNamespace::BitSet64_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f97ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitSet64_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitSet64_Enumerator::*)()>(&::GlobalNamespace::BitSet64_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitSet64_Enumerator::_ctor(uint64_t*  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline int32_t GlobalNamespace::BitSet64_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BitSet64_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::BitSet64_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BitSet64_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::BitSet64_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitSet64_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr  GlobalNamespace::BitSet64_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::BitSet64_Enumerator::i___System__Collections__Generic__IEnumerator_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BitSet64_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BitSet64_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BitSet64_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BitSet64_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bits", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BitSet64_Enumerator::BitSet64_Enumerator(uint64_t*  _bits, int32_t  _bit) noexcept  {
this->_bits = _bits;
this->_bit = _bit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitSet64_Enumerator::BitSet64_Enumerator()   {
}
