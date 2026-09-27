#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VelocityHelper)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VelocityHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VelocityHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VelocityHelper*, "", "VelocityHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VelocityHelper
class CORDL_TYPE VelocityHelper : public ::System::Object {
public:
// Declarations
/// @brief Field _initialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _latest, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__latest, put=__cordl_internal_set__latest)) int32_t  _latest;

/// @brief Field _samples, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::ArrayW<float_t>  _samples;

/// @brief Field _size, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

static inline ::GlobalNamespace::VelocityHelper* New_ctor(int32_t  historySize) ;

/// @brief Method SamplePosition, addr 0x5a223ec, size 0xc8, virtual false, abstract: false, final false
inline void SamplePosition(::UnityEngine::Transform*  target, float_t  dt) ;

/// @brief Method _InitSamples, addr 0x5a224b4, size 0x7c, virtual false, abstract: false, final false
inline void _InitSamples(::UnityEngine::Vector3  position, float_t  dt) ;

/// @brief Method _SetSample, addr 0x5a22530, size 0x6c, virtual false, abstract: false, final false
inline void _SetSample(int32_t  i, ::UnityEngine::Vector3  position, float_t  dt) ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr int32_t const& __cordl_internal_get__latest() const;

constexpr int32_t& __cordl_internal_get__latest() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__samples() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__samples() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__latest(int32_t  value) ;

constexpr void __cordl_internal_set__samples(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a22378, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  historySize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VelocityHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VelocityHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VelocityHelper(VelocityHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VelocityHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VelocityHelper(VelocityHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2846};

/// @brief Field _samples, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ____samples;

/// @brief Field _latest, offset: 0x18, size: 0x4, def value: None
 int32_t  ____latest;

/// @brief Field _size, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _initialized, offset: 0x20, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VelocityHelper, ____samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelper, ____latest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelper, ____size) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelper, ____initialized) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VelocityHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
