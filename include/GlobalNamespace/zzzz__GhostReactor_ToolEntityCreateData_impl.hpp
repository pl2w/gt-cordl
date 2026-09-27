#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_ToolEntityCreateData.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_ToolEntityCreateData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_ToolEntityCreateData.PackData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GhostReactor_ToolEntityCreateData::PackData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5847ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"PackData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_ToolEntityCreateData.UnpackData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, int32_t, int32_t)>(&::GlobalNamespace::GhostReactor_ToolEntityCreateData::UnpackData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5847bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"UnpackData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_ToolEntityCreateData.Unpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactor_ToolEntityCreateData (*)(int64_t)>(&::GlobalNamespace::GhostReactor_ToolEntityCreateData::Unpack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5847bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"Unpack", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_ToolEntityCreateData.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GhostReactor_ToolEntityCreateData::*)()>(&::GlobalNamespace::GhostReactor_ToolEntityCreateData::Pack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5847bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"Pack", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t GlobalNamespace::GhostReactor_ToolEntityCreateData::PackData(int32_t  value, int32_t  nbits, int32_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"PackData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, nbits, shift);
}
inline int32_t GlobalNamespace::GhostReactor_ToolEntityCreateData::UnpackData(int64_t  createData, int32_t  nbits, int32_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"UnpackData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, createData, nbits, shift);
}
inline ::GlobalNamespace::GhostReactor_ToolEntityCreateData GlobalNamespace::GhostReactor_ToolEntityCreateData::Unpack(int64_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"Unpack", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(nullptr, ___internal_method, bits);
}
inline int64_t GlobalNamespace::GhostReactor_ToolEntityCreateData::Pack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_ToolEntityCreateData>(),
                        {"Pack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "stationIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decayTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactor_ToolEntityCreateData::GhostReactor_ToolEntityCreateData(int32_t  stationIndex, float_t  decayTime) noexcept  {
this->stationIndex = stationIndex;
this->decayTime = decayTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor_ToolEntityCreateData::GhostReactor_ToolEntityCreateData()   {
}
