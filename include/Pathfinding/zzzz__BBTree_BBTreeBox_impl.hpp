#pragma once
// IWYU pragma private; include "Pathfinding/BBTree_BBTreeBox.hpp"
#include "Pathfinding/zzzz__IntRect_impl.hpp"
#include "Pathfinding/zzzz__BBTree_BBTreeBox_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BBTree_BBTreeBox.get_IsLeaf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BBTree_BBTreeBox::*)()>(&::GlobalNamespace::BBTree_BBTreeBox::get_IsLeaf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e958a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {"get_IsLeaf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BBTree_BBTreeBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BBTree_BBTreeBox::*)(::Pathfinding::IntRect)>(&::GlobalNamespace::BBTree_BBTreeBox::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e9482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BBTree_BBTreeBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BBTree_BBTreeBox::*)(int32_t, ::Pathfinding::IntRect)>(&::GlobalNamespace::BBTree_BBTreeBox::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e961f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BBTree_BBTreeBox.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BBTree_BBTreeBox::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BBTree_BBTreeBox::Contains)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e95c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::BBTree_BBTreeBox::get_IsLeaf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {"get_IsLeaf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::BBTree_BBTreeBox::_ctor(::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect);
}
inline void GlobalNamespace::BBTree_BBTreeBox::_ctor(int32_t  nodeOffset, ::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodeOffset, rect);
}
inline bool GlobalNamespace::BBTree_BBTreeBox::Contains(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BBTree_BBTreeBox>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::Pathfinding::IntRect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nodeOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BBTree_BBTreeBox::BBTree_BBTreeBox(::Pathfinding::IntRect  rect, int32_t  nodeOffset, int32_t  left, int32_t  right) noexcept  {
this->rect = rect;
this->nodeOffset = nodeOffset;
this->left = left;
this->right = right;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BBTree_BBTreeBox::BBTree_BBTreeBox()   {
}
