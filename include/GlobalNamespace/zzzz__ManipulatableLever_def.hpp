#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableLever.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ManipulatableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ManipulatableLever)
namespace GlobalNamespace {
class ManipulatableLever_LeverNotch;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ManipulatableLever;
}
namespace GlobalNamespace {
class ManipulatableLever_LeverNotch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ManipulatableLever*);
MARK_REF_T(::GlobalNamespace::ManipulatableLever_LeverNotch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManipulatableLever*, "", "ManipulatableLever");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManipulatableLever_LeverNotch*, "", "ManipulatableLever/LeverNotch");
// Dependencies ManipulatableLever::LeverNotch, ManipulatableObject, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: false
// CS Name: ManipulatableLever
class CORDL_TYPE ManipulatableLever : public ::GlobalNamespace::ManipulatableObject {
public:
// Declarations
using LeverNotch = ::GlobalNamespace::ManipulatableLever_LeverNotch;

/// @brief Field breakDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakDistance, put=__cordl_internal_set_breakDistance)) float_t  breakDistance;

/// @brief Field leverGrip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leverGrip, put=__cordl_internal_set_leverGrip)) ::UnityW<::UnityEngine::Transform>  leverGrip;

/// @brief Field localSpace, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_localSpace, put=__cordl_internal_set_localSpace)) ::UnityEngine::Matrix4x4  localSpace;

/// @brief Field maxAngle, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAngle, put=__cordl_internal_set_maxAngle)) float_t  maxAngle;

/// @brief Field minAngle, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAngle, put=__cordl_internal_set_minAngle)) float_t  minAngle;

/// @brief Field notches, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_notches, put=__cordl_internal_set_notches)) ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>  notches;

/// @brief Method Awake, addr 0x575c5b8, size 0x44, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNotch, addr 0x575ca34, size 0x84, virtual false, abstract: false, final false
inline int32_t GetNotch() ;

/// @brief Method GetValue, addr 0x575c9a0, size 0x94, virtual false, abstract: false, final false
inline float_t GetValue() ;

static inline ::GlobalNamespace::ManipulatableLever* New_ctor() ;

/// @brief Method OnHeldUpdate, addr 0x575c694, size 0x218, virtual true, abstract: false, final false
inline void OnHeldUpdate(::UnityEngine::GameObject*  hand) ;

/// @brief Method SetNotch, addr 0x575c93c, size 0x64, virtual false, abstract: false, final false
inline void SetNotch(int32_t  notchValue) ;

/// @brief Method SetValue, addr 0x575c8ac, size 0x90, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method ShouldHandDetach, addr 0x575c5fc, size 0x98, virtual true, abstract: false, final false
inline bool ShouldHandDetach(::UnityEngine::GameObject*  hand) ;

constexpr float_t const& __cordl_internal_get_breakDistance() const;

constexpr float_t& __cordl_internal_get_breakDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leverGrip() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leverGrip() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_localSpace() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_localSpace() ;

constexpr float_t const& __cordl_internal_get_maxAngle() const;

constexpr float_t& __cordl_internal_get_maxAngle() ;

constexpr float_t const& __cordl_internal_get_minAngle() const;

constexpr float_t& __cordl_internal_get_minAngle() ;

constexpr ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*> const& __cordl_internal_get_notches() const;

constexpr ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>& __cordl_internal_get_notches() ;

constexpr void __cordl_internal_set_breakDistance(float_t  value) ;

constexpr void __cordl_internal_set_leverGrip(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localSpace(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_maxAngle(float_t  value) ;

constexpr void __cordl_internal_set_minAngle(float_t  value) ;

constexpr void __cordl_internal_set_notches(::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>  value) ;

/// @brief Method .ctor, addr 0x575cab8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManipulatableLever() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableLever", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManipulatableLever(ManipulatableLever && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableLever", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManipulatableLever(ManipulatableLever const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1333};

/// [SerializeField]
/// @brief Field breakDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___breakDistance;

/// [SerializeField]
/// @brief Field leverGrip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leverGrip;

/// [SerializeField]
/// @brief Field maxAngle, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxAngle;

/// [SerializeField]
/// @brief Field minAngle, offset: 0x44, size: 0x4, def value: None
 float_t  ___minAngle;

/// [SerializeField]
/// @brief Field notches, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>  ___notches;

/// @brief Field localSpace, offset: 0x50, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___localSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___breakDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___leverGrip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___maxAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___minAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___notches) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever, ___localSpace) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManipulatableLever) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ManipulatableLever/LeverNotch
class CORDL_TYPE ManipulatableLever_LeverNotch : public ::System::Object {
public:
// Declarations
/// @brief Field maxAngleValue, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAngleValue, put=__cordl_internal_set_maxAngleValue)) float_t  maxAngleValue;

/// @brief Field minAngleValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAngleValue, put=__cordl_internal_set_minAngleValue)) float_t  minAngleValue;

/// @brief Field value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) int32_t  value;

static inline ::GlobalNamespace::ManipulatableLever_LeverNotch* New_ctor() ;

constexpr float_t const& __cordl_internal_get_maxAngleValue() const;

constexpr float_t& __cordl_internal_get_maxAngleValue() ;

constexpr float_t const& __cordl_internal_get_minAngleValue() const;

constexpr float_t& __cordl_internal_get_minAngleValue() ;

constexpr int32_t const& __cordl_internal_get_value() const;

constexpr int32_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_maxAngleValue(float_t  value) ;

constexpr void __cordl_internal_set_minAngleValue(float_t  value) ;

constexpr void __cordl_internal_set_value(int32_t  value) ;

/// @brief Method .ctor, addr 0x575cae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManipulatableLever_LeverNotch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableLever_LeverNotch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManipulatableLever_LeverNotch(ManipulatableLever_LeverNotch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableLever_LeverNotch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManipulatableLever_LeverNotch(ManipulatableLever_LeverNotch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1332};

/// @brief Field minAngleValue, offset: 0x10, size: 0x4, def value: None
 float_t  ___minAngleValue;

/// @brief Field maxAngleValue, offset: 0x14, size: 0x4, def value: None
 float_t  ___maxAngleValue;

/// @brief Field value, offset: 0x18, size: 0x4, def value: None
 int32_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManipulatableLever_LeverNotch, ___minAngleValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever_LeverNotch, ___maxAngleValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableLever_LeverNotch, ___value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManipulatableLever_LeverNotch) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
