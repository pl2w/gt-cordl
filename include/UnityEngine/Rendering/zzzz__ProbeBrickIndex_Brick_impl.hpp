#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_Brick.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_Brick_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickIndex_Brick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeBrickIndex_Brick::*)(::UnityEngine::Vector3Int, int32_t)>(&::GlobalNamespace::ProbeBrickIndex_Brick::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb159430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickIndex_Brick.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProbeBrickIndex_Brick::*)(::GlobalNamespace::ProbeBrickIndex_Brick)>(&::GlobalNamespace::ProbeBrickIndex_Brick::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb15943c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ProbeBrickIndex_Brick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickIndex_Brick.IntersectArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProbeBrickIndex_Brick::*)(::UnityEngine::Bounds)>(&::GlobalNamespace::ProbeBrickIndex_Brick::IntersectArea)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb159484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {"IntersectArea", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProbeBrickIndex_Brick::_ctor(::UnityEngine::Vector3Int  position, int32_t  subdivisionLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, subdivisionLevel);
}
inline bool GlobalNamespace::ProbeBrickIndex_Brick::Equals(::GlobalNamespace::ProbeBrickIndex_Brick  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ProbeBrickIndex_Brick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::ProbeBrickIndex_Brick::IntersectArea(::UnityEngine::Bounds  boundInBricksToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickIndex_Brick>(),
                        {"IntersectArea", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, boundInBricksToCheck);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>"
constexpr  GlobalNamespace::ProbeBrickIndex_Brick::operator ::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>* GlobalNamespace::ProbeBrickIndex_Brick::i___System__IEquatable_1___GlobalNamespace__ProbeBrickIndex_Brick_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ProbeBrickIndex_Brick>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeBrickIndex_Brick::ProbeBrickIndex_Brick(::UnityEngine::Vector3Int  position, int32_t  subdivisionLevel) noexcept  {
this->position = position;
this->subdivisionLevel = subdivisionLevel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeBrickIndex_Brick::ProbeBrickIndex_Brick()   {
}
