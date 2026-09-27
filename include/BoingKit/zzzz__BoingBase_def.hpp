#pragma once
// IWYU pragma private; include "BoingKit/BoingBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Version_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BoingBase)
namespace BoingKit {
struct Version;
}
// Forward declare root types
namespace BoingKit {
class BoingBase;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingBase*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBase*, "BoingKit", "BoingBase");
// Dependencies BoingKit.Version, UnityEngine.MonoBehaviour
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBase
class CORDL_TYPE BoingBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentVersion)) ::BoingKit::Version  CurrentVersion;

 __declspec(property(get=get_InitialVersion)) ::BoingKit::Version  InitialVersion;

 __declspec(property(get=get_PreviousVersion)) ::BoingKit::Version  PreviousVersion;

/// @brief Field m_currentVersion, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_currentVersion, put=__cordl_internal_set_m_currentVersion)) ::BoingKit::Version  m_currentVersion;

/// @brief Field m_initialVersion, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_initialVersion, put=__cordl_internal_set_m_initialVersion)) ::BoingKit::Version  m_initialVersion;

/// @brief Field m_previousVersion, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_previousVersion, put=__cordl_internal_set_m_previousVersion)) ::BoingKit::Version  m_previousVersion;

static inline ::BoingKit::BoingBase* New_ctor() ;

/// @brief Method OnUpgrade, addr 0x5e114ec, size 0xc4, virtual true, abstract: false, final false
inline void OnUpgrade(::BoingKit::Version  oldVersion, ::BoingKit::Version  newVersion) ;

constexpr ::BoingKit::Version const& __cordl_internal_get_m_currentVersion() const;

constexpr ::BoingKit::Version& __cordl_internal_get_m_currentVersion() ;

constexpr ::BoingKit::Version const& __cordl_internal_get_m_initialVersion() const;

constexpr ::BoingKit::Version& __cordl_internal_get_m_initialVersion() ;

constexpr ::BoingKit::Version const& __cordl_internal_get_m_previousVersion() const;

constexpr ::BoingKit::Version& __cordl_internal_get_m_previousVersion() ;

constexpr void __cordl_internal_set_m_currentVersion(::BoingKit::Version  value) ;

constexpr void __cordl_internal_set_m_initialVersion(::BoingKit::Version  value) ;

constexpr void __cordl_internal_set_m_previousVersion(::BoingKit::Version  value) ;

/// @brief Method .ctor, addr 0x5e115b0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentVersion, addr 0x5e114bc, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::Version get_CurrentVersion() ;

/// @brief Method get_InitialVersion, addr 0x5e114dc, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::Version get_InitialVersion() ;

/// @brief Method get_PreviousVersion, addr 0x5e114cc, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::Version get_PreviousVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBase(BoingBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBase(BoingBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5162};

/// [SerializeField]
/// @brief Field m_currentVersion, offset: 0x20, size: 0xc, def value: None
 ::BoingKit::Version  ___m_currentVersion;

/// [SerializeField]
/// @brief Field m_previousVersion, offset: 0x2c, size: 0xc, def value: None
 ::BoingKit::Version  ___m_previousVersion;

/// [SerializeField]
/// @brief Field m_initialVersion, offset: 0x38, size: 0xc, def value: None
 ::BoingKit::Version  ___m_initialVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBase, ___m_currentVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBase, ___m_previousVersion) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBase, ___m_initialVersion) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBase) == 0x48, "Size mismatch!");

} // namespace end def BoingKit
