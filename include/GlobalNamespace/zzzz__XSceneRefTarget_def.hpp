#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRefTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XSceneRefTarget)
// Forward declare root types
namespace GlobalNamespace {
class XSceneRefTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XSceneRefTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XSceneRefTarget*, "", "XSceneRefTarget");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: XSceneRefTarget
class CORDL_TYPE XSceneRefTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UniqueID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_UniqueID, put=__cordl_internal_set_UniqueID)) int32_t  UniqueID;

/// @brief Field epoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_epoch, put=setStaticF_epoch)) ::System::DateTime  epoch;

/// @brief Field lastAssignedID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastAssignedID, put=setStaticF_lastAssignedID)) int32_t  lastAssignedID;

/// @brief Field lastRegisteredID, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRegisteredID, put=__cordl_internal_set_lastRegisteredID)) int32_t  lastRegisteredID;

/// @brief Method AssignNewID, addr 0x56bbc2c, size 0x64, virtual false, abstract: false, final false
inline void AssignNewID() ;

/// @brief Method Awake, addr 0x56bb904, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateNewID, addr 0x56bba0c, size 0x154, virtual false, abstract: false, final false
static inline int32_t CreateNewID() ;

static inline ::GlobalNamespace::XSceneRefTarget* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56bbbd0, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0x56bbb60, size 0x70, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Register, addr 0x56bb90c, size 0xa8, virtual false, abstract: false, final false
inline void Register(bool  force) ;

/// @brief Method Reset, addr 0x56bb9b4, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_UniqueID() const;

constexpr int32_t& __cordl_internal_get_UniqueID() ;

constexpr int32_t const& __cordl_internal_get_lastRegisteredID() const;

constexpr int32_t& __cordl_internal_get_lastRegisteredID() ;

constexpr void __cordl_internal_set_UniqueID(int32_t  value) ;

constexpr void __cordl_internal_set_lastRegisteredID(int32_t  value) ;

/// @brief Method .ctor, addr 0x56bbc90, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTime getStaticF_epoch() ;

static inline int32_t getStaticF_lastAssignedID() ;

static inline void setStaticF_epoch(::System::DateTime  value) ;

static inline void setStaticF_lastAssignedID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XSceneRefTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XSceneRefTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XSceneRefTarget(XSceneRefTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XSceneRefTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XSceneRefTarget(XSceneRefTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{971};

/// @brief Field UniqueID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___UniqueID;

/// @brief Field lastRegisteredID, offset: 0x24, size: 0x4, def value: None
 int32_t  ___lastRegisteredID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XSceneRefTarget, ___UniqueID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XSceneRefTarget, ___lastRegisteredID) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XSceneRefTarget) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
