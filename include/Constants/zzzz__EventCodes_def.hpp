#pragma once
// IWYU pragma private; include "Constants/EventCodes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCodes)
// Forward declare root types
namespace Constants {
class EventCodes;
}
// Write type traits
MARK_REF_T(::Constants::EventCodes*);
DEFINE_IL2CPP_CLASS(::Constants::EventCodes*, "Constants", "EventCodes");
// Dependencies System.Object
namespace Constants {
// Is value type: false
// CS Name: Constants.EventCodes
class CORDL_TYPE EventCodes : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventCodes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventCodes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCodes(EventCodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCodes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCodes(EventCodes const& ) = delete;

/// @brief Field PLAYER_INFECTED offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_INFECTED{static_cast<uint8_t>(0x2u)};

/// @brief Field PLAYER_TAGGED offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_TAGGED{static_cast<uint8_t>(0x1u)};

/// @brief Field PLAYER_TOUCHED offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_TOUCHED{static_cast<uint8_t>(0x3u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Constants::EventCodes) == 0x10, "Size mismatch!");

} // namespace end def Constants
