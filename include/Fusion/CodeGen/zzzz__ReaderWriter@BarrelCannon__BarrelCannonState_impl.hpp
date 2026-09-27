#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@BarrelCannon__BarrelCannonState.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@BarrelCannon__BarrelCannonState_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BarrelCannon_BarrelCannonState (::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::BarrelCannon_BarrelCannonState> (::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::*)(uint8_t*, int32_t, ::GlobalNamespace::BarrelCannon_BarrelCannonState)>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2e968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::*)()>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2e974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::*)(::GlobalNamespace::BarrelCannon_BarrelCannonState)>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetElementHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* (*)()>(&::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2e998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*, "Instance", ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(std::forward<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*, "Instance", ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>();
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BarrelCannon_BarrelCannonState>(*this, ___internal_method, data, index);
}
inline ::by_ref<::GlobalNamespace::BarrelCannon_BarrelCannonState> Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::BarrelCannon_BarrelCannonState>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::BarrelCannon_BarrelCannonState  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetElementHashCode(::GlobalNamespace::BarrelCannon_BarrelCannonState  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>"
constexpr  Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::operator ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::i___Fusion__IElementReaderWriter_1___GlobalNamespace__BarrelCannon_BarrelCannonState_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState::ReaderWriter@BarrelCannon__BarrelCannonState()   {
}
