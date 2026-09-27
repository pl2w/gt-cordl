#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempAllocator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator`1_Page_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TempAllocator_1)
namespace GlobalNamespace {
template<typename T>
struct TempAllocator_1_Page;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class TempAllocator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::UIR::TempAllocator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::UIR::TempAllocator_1, "UnityEngine.UIElements.UIR", "TempAllocator`1");
// Dependencies System.Object, UnityEngine.UIElements.UIR.TempAllocator`1::Page<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TempAllocator`1<T>
class CORDL_TYPE TempAllocator_1 : public ::System::Object {
public:
// Declarations
using Page = ::GlobalNamespace::TempAllocator_1_Page<T>;

/// @brief Field <disposed>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed_k__BackingField, put=__cordl_internal_set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Field m_Excess, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Excess, put=__cordl_internal_set_m_Excess)) ::System::Collections::Generic::List_1<::GlobalNamespace::TempAllocator_1_Page<T>>*  m_Excess;

/// @brief Field m_ExcessMaxCapacity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExcessMaxCapacity, put=__cordl_internal_set_m_ExcessMaxCapacity)) int32_t  m_ExcessMaxCapacity;

/// @brief Field m_ExcessMinCapacity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExcessMinCapacity, put=__cordl_internal_set_m_ExcessMinCapacity)) int32_t  m_ExcessMinCapacity;

/// @brief Field m_NextExcessSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextExcessSize, put=__cordl_internal_set_m_NextExcessSize)) int32_t  m_NextExcessSize;

/// @brief Field m_Pool, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_Pool, put=__cordl_internal_set_m_Pool)) ::GlobalNamespace::TempAllocator_1_Page<T>  m_Pool;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeSlice_1<T> Alloc(int32_t  count) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeSlice_1<T> DoAlloc(int32_t  count) ;

static inline ::UnityEngine::UIElements::UIR::TempAllocator_1<T>* New_ctor(int32_t  poolCapacity, int32_t  excessMinCapacity, int32_t  excessMaxCapacity) ;

/// @brief Method ReleaseExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReleaseExcess() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposed_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TempAllocator_1_Page<T>>* const& __cordl_internal_get_m_Excess() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TempAllocator_1_Page<T>>*& __cordl_internal_get_m_Excess() ;

constexpr int32_t const& __cordl_internal_get_m_ExcessMaxCapacity() const;

constexpr int32_t& __cordl_internal_get_m_ExcessMaxCapacity() ;

constexpr int32_t const& __cordl_internal_get_m_ExcessMinCapacity() const;

constexpr int32_t& __cordl_internal_get_m_ExcessMinCapacity() ;

constexpr int32_t const& __cordl_internal_get_m_NextExcessSize() const;

constexpr int32_t& __cordl_internal_get_m_NextExcessSize() ;

constexpr ::GlobalNamespace::TempAllocator_1_Page<T> const& __cordl_internal_get_m_Pool() const;

constexpr ::GlobalNamespace::TempAllocator_1_Page<T>& __cordl_internal_get_m_Pool() ;

constexpr void __cordl_internal_set__disposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Excess(::System::Collections::Generic::List_1<::GlobalNamespace::TempAllocator_1_Page<T>>*  value) ;

constexpr void __cordl_internal_set_m_ExcessMaxCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_m_ExcessMinCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_m_NextExcessSize(int32_t  value) ;

constexpr void __cordl_internal_set_m_Pool(::GlobalNamespace::TempAllocator_1_Page<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  poolCapacity, int32_t  excessMinCapacity, int32_t  excessMaxCapacity) ;

/// [CompilerGenerated]
/// @brief Method get_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_disposed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempAllocator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempAllocator_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempAllocator_1(TempAllocator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempAllocator_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempAllocator_1(TempAllocator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8582};

/// @brief Field m_ExcessMinCapacity, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_ExcessMinCapacity;

/// @brief Field m_ExcessMaxCapacity, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_ExcessMaxCapacity;

/// @brief Field m_Pool, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::TempAllocator_1_Page<T>  ___m_Pool;

/// @brief Field m_Excess, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TempAllocator_1_Page<T>>*  ___m_Excess;

/// @brief Field m_NextExcessSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_NextExcessSize;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <disposed>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____disposed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
