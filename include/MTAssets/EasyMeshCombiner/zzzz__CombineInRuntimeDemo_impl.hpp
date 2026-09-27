#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/CombineInRuntimeDemo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__CombineInRuntimeDemo_def.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::*)()>(&::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::Update)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cb7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo.CombineMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::*)()>(&::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::CombineMeshes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb7d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"CombineMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo.UndoMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::*)()>(&::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::UndoMerge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb93ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"UndoMerge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::*)()>(&::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb9918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_combineButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_combineButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineButton;
}
constexpr void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_set_combineButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_undoButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undoButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_undoButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undoButton;
}
constexpr void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_set_undoButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undoButton = value;
}
constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_runtimeCombiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runtimeCombiner;
}
constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner> const& MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_get_runtimeCombiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runtimeCombiner;
}
constexpr void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::__cordl_internal_set_runtimeCombiner(::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runtimeCombiner = value;
}
inline void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::CombineMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"CombineMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::UndoMerge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {"UndoMerge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo* MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*>());
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo::CombineInRuntimeDemo()   {
}
