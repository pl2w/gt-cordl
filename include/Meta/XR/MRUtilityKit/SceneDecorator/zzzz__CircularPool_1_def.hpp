#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CircularPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CircularPool_1)
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Callbacks;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename T>
class CircularPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::CircularPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::CircularPool_1, "Meta.XR.MRUtilityKit.SceneDecorator", "CircularPool`1");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Pool`1<T>
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool`1<T>
class CORDL_TYPE CircularPool_1 : public ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T> {
public:
// Declarations
 __declspec(property(get=get_CountActive)) int32_t  CountActive;

 __declspec(property(get=get_CountAll)) int32_t  CountAll;

/// @brief Field active, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) int32_t  active;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T Get() ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::CircularPool_1<T>* New_ctor(T  primitive, int32_t  size, ::GlobalNamespace::Pool_1_Callbacks<T>  callbacks) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Release(T  t) ;

constexpr int32_t const& __cordl_internal_get_active() const;

constexpr int32_t& __cordl_internal_get_active() ;

constexpr void __cordl_internal_set_active(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  primitive, int32_t  size, ::GlobalNamespace::Pool_1_Callbacks<T>  callbacks) ;

/// @brief Method get_CountActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CountActive() ;

/// @brief Method get_CountAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CountAll() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircularPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircularPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CircularPool_1(CircularPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircularPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircularPool_1(CircularPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25952};

/// @brief Field active, offset: 0x40, size: 0x4, def value: None
 int32_t  ___active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
