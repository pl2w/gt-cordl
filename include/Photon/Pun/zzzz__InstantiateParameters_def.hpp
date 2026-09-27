#pragma once
// IWYU pragma private; include "Photon/Pun/InstantiateParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstantiateParameters)
namespace Photon::Realtime {
class Player;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
struct InstantiateParameters;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::InstantiateParameters);
DEFINE_IL2CPP_CLASS(::Photon::Pun::InstantiateParameters, "Photon.Pun", "InstantiateParameters");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.InstantiateParameters
struct CORDL_TYPE InstantiateParameters {
public:
// Declarations
/// @brief Method .ctor, addr 0xa71556c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data, uint8_t  objLevelPrefix, ::ArrayW<int32_t>  viewIDs, ::Photon::Realtime::Player*  creator, int32_t  timestamp) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstantiateParameters() ;

// Ctor Parameters [CppParam { name: "viewIDs", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "objLevelPrefix", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "group", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefabName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "creator", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: None, comment: None }, CppParam { name: "timestamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InstantiateParameters(::ArrayW<int32_t>  viewIDs, uint8_t  objLevelPrefix, ::ArrayW<::System::Object*>  data, uint8_t  group, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::StringW  prefabName, ::Photon::Realtime::Player*  creator, int32_t  timestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field viewIDs, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  viewIDs;

/// @brief Field objLevelPrefix, offset: 0x8, size: 0x1, def value: None
 uint8_t  objLevelPrefix;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  data;

/// @brief Field group, offset: 0x18, size: 0x1, def value: None
 uint8_t  group;

/// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field position, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field prefabName, offset: 0x38, size: 0x8, def value: None
 ::StringW  prefabName;

/// @brief Field creator, offset: 0x40, size: 0x8, def value: None
 ::Photon::Realtime::Player*  creator;

/// @brief Field timestamp, offset: 0x48, size: 0x4, def value: None
 int32_t  timestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::InstantiateParameters, viewIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, objLevelPrefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, position) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, prefabName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, creator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::InstantiateParameters, timestamp) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::InstantiateParameters) == 0x50, "Size mismatch!");

} // namespace end def Photon::Pun
