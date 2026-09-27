#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@BatteryChargerState__FusionCrankData.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@BatteryChargerState__FusionCrankData_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_FusionCrankData_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BatteryChargerState_FusionCrankData (::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2fc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::BatteryChargerState_FusionCrankData> (::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::ReadRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::*)(uint8_t*, int32_t, ::GlobalNamespace::BatteryChargerState_FusionCrankData)>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::Write)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2fc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionCrankData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::*)()>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::*)(::GlobalNamespace::BatteryChargerState_FusionCrankData)>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetElementHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e2fc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionCrankData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* (*)()>(&::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*, "Instance", ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(std::forward<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*, "Instance", ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>();
}
inline ::GlobalNamespace::BatteryChargerState_FusionCrankData Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BatteryChargerState_FusionCrankData>(*this, ___internal_method, data, index);
}
inline ::by_ref<::GlobalNamespace::BatteryChargerState_FusionCrankData> Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::BatteryChargerState_FusionCrankData>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::BatteryChargerState_FusionCrankData  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionCrankData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetElementHashCode(::GlobalNamespace::BatteryChargerState_FusionCrankData  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState_FusionCrankData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>"
constexpr  Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::operator ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::i___Fusion__IElementReaderWriter_1___GlobalNamespace__BatteryChargerState_FusionCrankData_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData::ReaderWriter@BatteryChargerState__FusionCrankData()   {
}
