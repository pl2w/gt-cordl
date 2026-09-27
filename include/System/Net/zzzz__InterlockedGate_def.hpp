#pragma once
// IWYU pragma private; include "System/Net/InterlockedGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InterlockedGate)
// Forward declare root types
namespace System::Net {
struct InterlockedGate;
}
// Write type traits
MARK_VAL_T(::System::Net::InterlockedGate);
DEFINE_IL2CPP_CLASS(::System::Net::InterlockedGate, "System.Net", "InterlockedGate");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.InterlockedGate
struct CORDL_TYPE InterlockedGate {
public:
// Declarations
/// @brief Method Complete, addr 0xac5a44c, size 0x24, virtual false, abstract: false, final false
inline bool Complete() ;

/// @brief Method FinishSignaling, addr 0xac5a3f8, size 0x54, virtual false, abstract: false, final false
inline void FinishSignaling() ;

/// @brief Method FinishTriggering, addr 0xac5a33c, size 0x54, virtual false, abstract: false, final false
inline void FinishTriggering() ;

/// @brief Method Reset, addr 0xac5a264, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method StartSignaling, addr 0xac5a390, size 0x68, virtual false, abstract: false, final false
inline bool StartSignaling(bool  exclusive) ;

/// @brief Method StartTriggering, addr 0xac5a2d4, size 0x68, virtual false, abstract: false, final false
inline bool StartTriggering(bool  exclusive) ;

/// @brief Method Trigger, addr 0xac5a26c, size 0x68, virtual false, abstract: false, final false
inline bool Trigger(bool  exclusive) ;

// Ctor Parameters []
// @brief default ctor
constexpr InterlockedGate() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InterlockedGate(int32_t  m_State) noexcept;

/// @brief Field Completed offset 0xffffffff size 0x4
static constexpr int32_t  Completed{static_cast<int32_t>(0x5)};

/// @brief Field Open offset 0xffffffff size 0x4
static constexpr int32_t  Open{static_cast<int32_t>(0x0)};

/// @brief Field Signaled offset 0xffffffff size 0x4
static constexpr int32_t  Signaled{static_cast<int32_t>(0x4)};

/// @brief Field Signaling offset 0xffffffff size 0x4
static constexpr int32_t  Signaling{static_cast<int32_t>(0x3)};

/// @brief Field Triggered offset 0xffffffff size 0x4
static constexpr int32_t  Triggered{static_cast<int32_t>(0x2)};

/// @brief Field Triggering offset 0xffffffff size 0x4
static constexpr int32_t  Triggering{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_State, offset: 0x0, size: 0x4, def value: None
 int32_t  m_State;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::InterlockedGate, m_State) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::InterlockedGate) == 0x4, "Size mismatch!");

} // namespace end def System::Net
