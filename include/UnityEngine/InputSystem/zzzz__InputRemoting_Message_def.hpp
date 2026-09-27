#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_Message.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputRemoting_MessageType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_Message)
// Forward declare root types
namespace GlobalNamespace {
struct InputRemoting_Message;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputRemoting_Message);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputRemoting_Message, "UnityEngine.InputSystem", "InputRemoting/Message");
// Dependencies UnityEngine.InputSystem.InputRemoting::MessageType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/Message
struct CORDL_TYPE InputRemoting_Message {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_Message() ;

// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::InputRemoting_MessageType", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr InputRemoting_Message(int32_t  participantId, ::GlobalNamespace::InputRemoting_MessageType  type, ::ArrayW<uint8_t>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field participantId, offset: 0x0, size: 0x4, def value: None
 int32_t  participantId;

/// @brief Field type, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::InputRemoting_MessageType  type;

/// @brief Field data, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputRemoting_Message, participantId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_Message, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_Message, data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputRemoting_Message) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
