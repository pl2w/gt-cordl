#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/PinnedMemory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PinnedMemory)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace K4os::Compression::LZ4::Internal {
struct PinnedMemory;
}
// Write type traits
MARK_VAL_T(::K4os::Compression::LZ4::Internal::PinnedMemory);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Internal::PinnedMemory, "K4os.Compression.LZ4.Internal", "PinnedMemory");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace K4os::Compression::LZ4::Internal {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Internal.PinnedMemory
struct CORDL_TYPE PinnedMemory {
public:
// Declarations
 __declspec(property(get=get_Pointer)) uint8_t*  Pointer;

 __declspec(property(get=get_Span)) ::System::Span_1<uint8_t>  Span;

/// @brief Field <MaxPooledSize>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxPooledSize_k__BackingField, put=setStaticF__MaxPooledSize_k__BackingField)) int32_t  _MaxPooledSize_k__BackingField;

/// @brief Method Alloc, addr 0x9cb9b0c, size 0x130, virtual false, abstract: false, final false
static inline void Alloc(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero) ;

/// @brief Method AllocateNative, addr 0x9cbb148, size 0xfc, virtual false, abstract: false, final false
static inline void AllocateNative(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero) ;

/// @brief Method ClearFields, addr 0x9cbb500, size 0xc, virtual false, abstract: false, final false
inline void ClearFields() ;

/// @brief Method Free, addr 0x9cbb2f0, size 0x9c, virtual false, abstract: false, final false
inline void Free() ;

/// [IsReadOnly]
/// @brief Method Reference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Reference() ;

/// @brief Method ReleaseManaged, addr 0x9cbb38c, size 0xac, virtual false, abstract: false, final false
inline void ReleaseManaged() ;

/// @brief Method ReleaseNative, addr 0x9cbb438, size 0xc8, virtual false, abstract: false, final false
inline void ReleaseNative() ;

/// @brief Method RentManagedFromPool, addr 0x9cbb244, size 0xac, virtual false, abstract: false, final false
static inline void RentManagedFromPool(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero) ;

static inline int32_t getStaticF__MaxPooledSize_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_MaxPooledSize, addr 0x9cbb070, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_MaxPooledSize() ;

/// [IsReadOnly]
/// @brief Method get_Pointer, addr 0x9cbb0c8, size 0x8, virtual false, abstract: false, final false
inline uint8_t* get_Pointer() ;

/// @brief Method get_Span, addr 0x9cbb0d0, size 0x78, virtual false, abstract: false, final false
inline ::System::Span_1<uint8_t> get_Span() ;

static inline void setStaticF__MaxPooledSize_k__BackingField(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PinnedMemory() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "_size", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PinnedMemory(uint8_t*  _pointer, ::System::Runtime::InteropServices::GCHandle  _handle, int32_t  _size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  _pointer;

/// @brief Field _handle, offset: 0x8, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Field _size, offset: 0x10, size: 0x4, def value: None
 int32_t  _size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::K4os::Compression::LZ4::Internal::PinnedMemory, _pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::K4os::Compression::LZ4::Internal::PinnedMemory, _handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::K4os::Compression::LZ4::Internal::PinnedMemory, _size) == 0x10, "Offset mismatch!");

static_assert(sizeof(::K4os::Compression::LZ4::Internal::PinnedMemory) == 0x18, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Internal
