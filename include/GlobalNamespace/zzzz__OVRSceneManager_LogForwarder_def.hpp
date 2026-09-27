#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_LogForwarder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSceneManager_LogForwarder)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_LogForwarder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_LogForwarder, "", "OVRSceneManager/LogForwarder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE OVRSceneManager_LogForwarder {
public:
// Declarations
/// @brief Method Log, addr 0xa63264c, size 0xbc, virtual false, abstract: false, final false
inline void Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogError, addr 0xa62ee9c, size 0xbc, virtual false, abstract: false, final false
inline void LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogWarning, addr 0xa632048, size 0xbc, virtual false, abstract: false, final false
inline void LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_LogForwarder() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSceneManager_LogForwarder) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
