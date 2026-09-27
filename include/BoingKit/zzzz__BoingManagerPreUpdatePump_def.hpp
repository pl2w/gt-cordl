#pragma once
// IWYU pragma private; include "BoingKit/BoingManagerPreUpdatePump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BoingManagerPreUpdatePump)
// Forward declare root types
namespace BoingKit {
class BoingManagerPreUpdatePump;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingManagerPreUpdatePump*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManagerPreUpdatePump*, "BoingKit", "BoingManagerPreUpdatePump");
// Dependencies UnityEngine.MonoBehaviour
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManagerPreUpdatePump
class CORDL_TYPE BoingManagerPreUpdatePump : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_lastPumpedFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lastPumpedFrame, put=__cordl_internal_set_m_lastPumpedFrame)) int32_t  m_lastPumpedFrame;

/// @brief Method DoPump, addr 0x5e1b698, size 0x58, virtual false, abstract: false, final false
inline void DoPump() ;

/// @brief Method FixedUpdate, addr 0x5e1b64c, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::BoingKit::BoingManagerPreUpdatePump* New_ctor() ;

/// @brief Method TryPump, addr 0x5e1b650, size 0x44, virtual false, abstract: false, final false
inline void TryPump() ;

/// @brief Method Update, addr 0x5e1b694, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_m_lastPumpedFrame() const;

constexpr int32_t& __cordl_internal_get_m_lastPumpedFrame() ;

constexpr void __cordl_internal_set_m_lastPumpedFrame(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e1b6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManagerPreUpdatePump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManagerPreUpdatePump", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManagerPreUpdatePump(BoingManagerPreUpdatePump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManagerPreUpdatePump", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManagerPreUpdatePump(BoingManagerPreUpdatePump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5193};

/// @brief Field m_lastPumpedFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_lastPumpedFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingManagerPreUpdatePump, ___m_lastPumpedFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingManagerPreUpdatePump) == 0x28, "Size mismatch!");

} // namespace end def BoingKit
