#pragma once
// IWYU pragma private; include "PlayFab/Public/PlayFabLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Public/zzzz__PlayFabLoggerBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabLogger)
// Forward declare root types
namespace PlayFab::Public {
class PlayFabLogger;
}
// Write type traits
MARK_REF_T(::PlayFab::Public::PlayFabLogger*);
DEFINE_IL2CPP_CLASS(::PlayFab::Public::PlayFabLogger*, "PlayFab.Public", "PlayFabLogger");
// Dependencies PlayFab.Public.PlayFabLoggerBase
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.PlayFabLogger
class CORDL_TYPE PlayFabLogger : public ::PlayFab::Public::PlayFabLoggerBase {
public:
// Declarations
/// @brief Method BeginUploadLog, addr 0xa842e0c, size 0x4, virtual true, abstract: false, final false
inline void BeginUploadLog() ;

/// @brief Method EndUploadLog, addr 0xa842e14, size 0x4, virtual true, abstract: false, final false
inline void EndUploadLog() ;

static inline ::PlayFab::Public::PlayFabLogger* New_ctor() ;

/// @brief Method UploadLog, addr 0xa842e10, size 0x4, virtual true, abstract: false, final false
inline void UploadLog(::StringW  message) ;

/// @brief Method .ctor, addr 0xa842e18, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabLogger(PlayFabLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabLogger(PlayFabLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Public::PlayFabLogger) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::Public
