#pragma once
// IWYU pragma private; include "Liv/NGFX/NI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NI)
namespace Liv::NGFX {
struct LogLevel;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::NGFX {
class NI;
}
// Write type traits
MARK_REF_T(::Liv::NGFX::NI*);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::NI*, "Liv.NGFX", "NI");
// Dependencies System.Object
namespace Liv::NGFX {
// Is value type: false
// CS Name: Liv.NGFX.NI
class CORDL_TYPE NI : public ::System::Object {
public:
// Declarations
/// @brief Method AllocResource, addr 0x9cdb55c, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t AllocResource(::System::IntPtr  resource_ctx) ;

/// @brief Method GetPluginEventFunction, addr 0x9cdb4f8, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPluginEventFunction() ;

static inline ::Liv::NGFX::NI* New_ctor() ;

/// @brief Method SetGlobalLogLevel, addr 0x9cdb5d8, size 0x84, virtual false, abstract: false, final false
static inline void SetGlobalLogLevel(::Liv::NGFX::LogLevel  level, bool  enableGLMessages) ;

/// @brief Method .ctor, addr 0x9cdb7a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method ngfx_create_context, addr 0x9cdb65c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ngfx_create_context() ;

/// @brief Method ngfx_destroy_context, addr 0x9cdb6c0, size 0x7c, virtual false, abstract: false, final false
static inline void ngfx_destroy_context(::System::IntPtr  ctx) ;

/// @brief Method ngfx_get_graphics_api, addr 0x9cdb73c, size 0x64, virtual false, abstract: false, final false
static inline int32_t ngfx_get_graphics_api() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NI(NI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NI(NI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::NGFX::NI) == 0x10, "Size mismatch!");

} // namespace end def Liv::NGFX
