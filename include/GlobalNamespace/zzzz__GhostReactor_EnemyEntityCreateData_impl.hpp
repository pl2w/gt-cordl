#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_EnemyEntityCreateData.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_EnemyEntityCreateData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_EnemyEntityCreateData.PackData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GhostReactor_EnemyEntityCreateData::PackData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5847b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"PackData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_EnemyEntityCreateData.UnpackData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, int32_t, int32_t)>(&::GlobalNamespace::GhostReactor_EnemyEntityCreateData::UnpackData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5847b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"UnpackData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_EnemyEntityCreateData.Unpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactor_EnemyEntityCreateData (*)(int64_t)>(&::GlobalNamespace::GhostReactor_EnemyEntityCreateData::Unpack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x584780c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"Unpack", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_EnemyEntityCreateData.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GhostReactor_EnemyEntityCreateData::*)()>(&::GlobalNamespace::GhostReactor_EnemyEntityCreateData::Pack)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x584782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"Pack", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t GlobalNamespace::GhostReactor_EnemyEntityCreateData::PackData(int32_t  value, int32_t  nbits, int32_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"PackData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, nbits, shift);
}
inline int32_t GlobalNamespace::GhostReactor_EnemyEntityCreateData::UnpackData(int64_t  createData, int32_t  nbits, int32_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"UnpackData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, createData, nbits, shift);
}
inline ::GlobalNamespace::GhostReactor_EnemyEntityCreateData GlobalNamespace::GhostReactor_EnemyEntityCreateData::Unpack(int64_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"Unpack", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(nullptr, ___internal_method, bits);
}
inline int64_t GlobalNamespace::GhostReactor_EnemyEntityCreateData::Pack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EnemyEntityCreateData>(),
                        {"Pack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "respawnCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sectionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "patrolIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactor_EnemyEntityCreateData::GhostReactor_EnemyEntityCreateData(int32_t  respawnCount, int32_t  sectionIndex, int32_t  patrolIndex) noexcept  {
this->respawnCount = respawnCount;
this->sectionIndex = sectionIndex;
this->patrolIndex = patrolIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor_EnemyEntityCreateData::GhostReactor_EnemyEntityCreateData()   {
}
