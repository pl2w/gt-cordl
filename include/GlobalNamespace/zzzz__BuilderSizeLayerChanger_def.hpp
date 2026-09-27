#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSizeLayerChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSizeLayerChanger)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderSizeLayerChanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderSizeLayerChanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSizeLayerChanger*, "", "BuilderSizeLayerChanger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSizeLayerChanger
class CORDL_TYPE BuilderSizeLayerChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SizeLayerMask)) int32_t  SizeLayerMask;

/// @brief Field affectLayerA, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerA, put=__cordl_internal_set_affectLayerA)) bool  affectLayerA;

/// @brief Field affectLayerB, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerB, put=__cordl_internal_set_affectLayerB)) bool  affectLayerB;

/// @brief Field affectLayerC, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerC, put=__cordl_internal_set_affectLayerC)) bool  affectLayerC;

/// @brief Field affectLayerD, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerD, put=__cordl_internal_set_affectLayerD)) bool  affectLayerD;

/// @brief Field applyOnTriggerEnter, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnTriggerEnter, put=__cordl_internal_set_applyOnTriggerEnter)) bool  applyOnTriggerEnter;

/// @brief Field applyOnTriggerExit, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnTriggerExit, put=__cordl_internal_set_applyOnTriggerExit)) bool  applyOnTriggerExit;

/// @brief Field fxForLayerChange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxForLayerChange, put=__cordl_internal_set_fxForLayerChange)) ::UnityW<::UnityEngine::GameObject>  fxForLayerChange;

/// @brief Field isAssurance, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAssurance, put=__cordl_internal_set_isAssurance)) bool  isAssurance;

/// @brief Field maxScale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxScale, put=__cordl_internal_set_maxScale)) float_t  maxScale;

/// @brief Field minScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Method Awake, addr 0x57b4148, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderSizeLayerChanger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57b4160, size 0x29c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57b43fc, size 0x29c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_affectLayerA() const;

constexpr bool& __cordl_internal_get_affectLayerA() ;

constexpr bool const& __cordl_internal_get_affectLayerB() const;

constexpr bool& __cordl_internal_get_affectLayerB() ;

constexpr bool const& __cordl_internal_get_affectLayerC() const;

constexpr bool& __cordl_internal_get_affectLayerC() ;

constexpr bool const& __cordl_internal_get_affectLayerD() const;

constexpr bool& __cordl_internal_get_affectLayerD() ;

constexpr bool const& __cordl_internal_get_applyOnTriggerEnter() const;

constexpr bool& __cordl_internal_get_applyOnTriggerEnter() ;

constexpr bool const& __cordl_internal_get_applyOnTriggerExit() const;

constexpr bool& __cordl_internal_get_applyOnTriggerExit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxForLayerChange() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxForLayerChange() ;

constexpr bool const& __cordl_internal_get_isAssurance() const;

constexpr bool& __cordl_internal_get_isAssurance() ;

constexpr float_t const& __cordl_internal_get_maxScale() const;

constexpr float_t& __cordl_internal_get_maxScale() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr void __cordl_internal_set_affectLayerA(bool  value) ;

constexpr void __cordl_internal_set_affectLayerB(bool  value) ;

constexpr void __cordl_internal_set_affectLayerC(bool  value) ;

constexpr void __cordl_internal_set_affectLayerD(bool  value) ;

constexpr void __cordl_internal_set_applyOnTriggerEnter(bool  value) ;

constexpr void __cordl_internal_set_applyOnTriggerExit(bool  value) ;

constexpr void __cordl_internal_set_fxForLayerChange(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isAssurance(bool  value) ;

constexpr void __cordl_internal_set_maxScale(float_t  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

/// @brief Method .ctor, addr 0x57b4698, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SizeLayerMask, addr 0x57b4110, size 0x38, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMask() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSizeLayerChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSizeLayerChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSizeLayerChanger(BuilderSizeLayerChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSizeLayerChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSizeLayerChanger(BuilderSizeLayerChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1573};

/// @brief Field maxScale, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxScale;

/// @brief Field minScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___minScale;

/// @brief Field isAssurance, offset: 0x28, size: 0x1, def value: None
 bool  ___isAssurance;

/// @brief Field affectLayerA, offset: 0x29, size: 0x1, def value: None
 bool  ___affectLayerA;

/// @brief Field affectLayerB, offset: 0x2a, size: 0x1, def value: None
 bool  ___affectLayerB;

/// @brief Field affectLayerC, offset: 0x2b, size: 0x1, def value: None
 bool  ___affectLayerC;

/// @brief Field affectLayerD, offset: 0x2c, size: 0x1, def value: None
 bool  ___affectLayerD;

/// [SerializeField]
/// @brief Field applyOnTriggerEnter, offset: 0x2d, size: 0x1, def value: None
 bool  ___applyOnTriggerEnter;

/// [SerializeField]
/// @brief Field applyOnTriggerExit, offset: 0x2e, size: 0x1, def value: None
 bool  ___applyOnTriggerExit;

/// [SerializeField]
/// @brief Field fxForLayerChange, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxForLayerChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___maxScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___minScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___isAssurance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___affectLayerA) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___affectLayerB) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___affectLayerC) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___affectLayerD) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___applyOnTriggerEnter) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___applyOnTriggerExit) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSizeLayerChanger, ___fxForLayerChange) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSizeLayerChanger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
