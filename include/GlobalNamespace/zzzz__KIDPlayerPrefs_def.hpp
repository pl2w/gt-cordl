#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDPlayerPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDPlayerPrefs)
// Forward declare root types
namespace GlobalNamespace {
class KIDPlayerPrefs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDPlayerPrefs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDPlayerPrefs*, "", "KIDPlayerPrefs");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDPlayerPrefs
class CORDL_TYPE KIDPlayerPrefs : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::KIDPlayerPrefs* New_ctor() ;

/// @brief Method .ctor, addr 0x5a3e404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDPlayerPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDPlayerPrefs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDPlayerPrefs(KIDPlayerPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDPlayerPrefs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDPlayerPrefs(KIDPlayerPrefs const& ) = delete;

/// @brief Field KID_DEFAULT_PERMISSIONS_CSV offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_DEFAULT_PERMISSIONS_CSV{u"kid-default-permission-csv"};

/// @brief Field KID_EMAIL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_EMAIL_KEY{u"k-id_EmailAddress"};

/// @brief Field KID_PERMISSIONS_CSV offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSIONS_CSV{u"kid-permission-csv"};

/// @brief Field KID_PERMISSIONS_ENABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSIONS_ENABLED_KEY{u"-enabled"};

/// @brief Field KID_PERMISSIONS_MANAGED_BY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSIONS_MANAGED_BY_KEY{u"-managed-by"};

/// @brief Field SESSION_CHANGED_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  SESSION_CHANGED_PLAYER_PREF{u"kIDSessionUpdated-"};

/// @brief Field SESSION_ETAG_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  SESSION_ETAG_PLAYER_PREF{u"kIDSessionETAG-"};

/// @brief Field SESSION_ID_PREFIX_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  SESSION_ID_PREFIX_PLAYER_PREF{u"kIDSessionID-"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDPlayerPrefs) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
