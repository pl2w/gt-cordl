#pragma once
// IWYU pragma private; include "Liv/NGFX/Handle_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Handle_1)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::NGFX {
template<typename T>
class Handle_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Liv::NGFX::Handle_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::NGFX::Handle_1, "Liv.NGFX", "Handle`1");
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace Liv::NGFX {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Liv.NGFX.Handle`1<T>
class CORDL_TYPE Handle_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_data, put=__cordl_internal_set_m_data)) T  m_data;

/// @brief Field m_handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_handle, put=__cordl_internal_set_m_handle)) ::System::Runtime::InteropServices::GCHandle  m_handle;

/// @brief Field m_valid, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_valid, put=__cordl_internal_set_m_valid)) bool  m_valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Liv::NGFX::Handle_1<T>* New_ctor(T  data) ;

constexpr T const& __cordl_internal_get_m_data() const;

constexpr T& __cordl_internal_get_m_data() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_handle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_handle() ;

constexpr bool const& __cordl_internal_get_m_valid() const;

constexpr bool& __cordl_internal_get_m_valid() ;

constexpr void __cordl_internal_set_m_data(T  value) ;

constexpr void __cordl_internal_set_m_handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_valid(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  data) ;

/// @brief Method data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T data() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method ptr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::IntPtr ptr() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Handle_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Handle_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Handle_1(Handle_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Handle_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Handle_1(Handle_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24664};

/// @brief Field m_data, offset: 0x10, size: 0x8, def value: None
 T  ___m_data;

/// @brief Field m_handle, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_handle;

/// @brief Field m_valid, offset: 0x20, size: 0x1, def value: None
 bool  ___m_valid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::NGFX
