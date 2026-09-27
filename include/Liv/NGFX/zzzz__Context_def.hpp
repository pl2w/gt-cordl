#pragma once
// IWYU pragma private; include "Liv/NGFX/Context.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Context)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::NGFX {
class Context;
}
// Write type traits
MARK_REF_T(::Liv::NGFX::Context*);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::Context*, "Liv.NGFX", "Context");
// Dependencies System.IntPtr, System.Object
namespace Liv::NGFX {
// Is value type: false
// CS Name: Liv.NGFX.Context
class CORDL_TYPE Context : public ::System::Object {
public:
// Declarations
/// @brief Field m_context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_context, put=__cordl_internal_set_m_context)) ::System::IntPtr  m_context;

/// @brief Field m_valid, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_valid, put=__cordl_internal_set_m_valid)) bool  m_valid;

 __declspec(property(get=get_ptr)) ::System::IntPtr  ptr;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9cdc320, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x9cdc284, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Liv::NGFX::Context* New_ctor() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_context() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_context() ;

constexpr bool const& __cordl_internal_get_m_valid() const;

constexpr bool& __cordl_internal_get_m_valid() ;

constexpr void __cordl_internal_set_m_context(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_valid(bool  value) ;

/// @brief Method .ctor, addr 0x9cdc254, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ptr, addr 0x9cdc348, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr get_ptr() ;

/// @brief Method get_valid, addr 0x9cdc350, size 0x8, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x9cdc358, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Liv::NGFX::Context*  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Context(Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Context(Context const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24675};

/// @brief Field m_context, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_context;

/// @brief Field m_valid, offset: 0x18, size: 0x1, def value: None
 bool  ___m_valid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NGFX::Context, ___m_context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::Context, ___m_valid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::NGFX::Context) == 0x20, "Size mismatch!");

} // namespace end def Liv::NGFX
