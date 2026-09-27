#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeStream)
namespace GlobalNamespace {
struct NativeStream_ConstructJobList;
}
namespace GlobalNamespace {
struct NativeStream_ConstructJob;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeStream;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeStream);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeStream, "Unity.Collections", "NativeStream");
// [NativeContainer]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream
struct CORDL_TYPE NativeStream {
public:
// Declarations
using ConstructJob = ::GlobalNamespace::NativeStream_ConstructJob;

using ConstructJobList = ::GlobalNamespace::NativeStream_ConstructJobList;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateForEach, addr 0xaf06f14, size 0x4, virtual false, abstract: false, final false
inline void AllocateForEach(int32_t  forEachCount) ;

/// @brief Method Dispose, addr 0xaf06ef4, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0xaf06ee4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeStream() ;

// Ctor Parameters [CppParam { name: "m_Stream", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None, comment: None }]
constexpr NativeStream(::Unity::Collections::LowLevel::Unsafe::UnsafeStream  m_Stream) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Stream, offset: 0x0, size: 0x20, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeStream  m_Stream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream, m_Stream) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::NativeStream) == 0x20, "Size mismatch!");

} // namespace end def Unity::Collections
