#pragma once
// IWYU pragma private; include "Liv/NGFX/ResourceDestroyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__EventType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceDestroyInfo)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::NGFX {
struct ResourceDestroyInfo;
}
// Write type traits
MARK_VAL_T(::Liv::NGFX::ResourceDestroyInfo);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::ResourceDestroyInfo, "Liv.NGFX", "ResourceDestroyInfo");
// Dependencies Liv.NGFX.EventType, System.IntPtr
namespace Liv::NGFX {
// Is value type: true
// CS Name: Liv.NGFX.ResourceDestroyInfo
#pragma pack(push, 1)
struct CORDL_TYPE ResourceDestroyInfo {
public:
// Declarations
/// @brief Field eventType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_eventType, put=setStaticF_eventType)) ::Liv::NGFX::EventType  eventType;

/// @brief Method .ctor, addr 0x9cdb7a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, uint32_t  id) ;

static inline ::Liv::NGFX::EventType getStaticF_eventType() ;

static inline void setStaticF_eventType(::Liv::NGFX::EventType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ResourceDestroyInfo() ;

// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ResourceDestroyInfo(::System::IntPtr  m_context, uint32_t  m_id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24665};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_context, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_context;

/// @brief Field m_id, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Liv::NGFX::ResourceDestroyInfo, m_context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::ResourceDestroyInfo, m_id) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::NGFX::ResourceDestroyInfo) == 0xc, "Size mismatch!");

} // namespace end def Liv::NGFX
