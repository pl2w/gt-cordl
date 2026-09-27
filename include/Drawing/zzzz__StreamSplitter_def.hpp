#pragma once
// IWYU pragma private; include "Drawing/StreamSplitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamSplitter)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Drawing {
struct StreamSplitter;
}
// Write type traits
MARK_VAL_T(::Drawing::StreamSplitter);
DEFINE_IL2CPP_CLASS(::Drawing::StreamSplitter, "Drawing", "StreamSplitter");
// [BurstCompile]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer, Unity.Collections.NativeArray`1<T>
namespace Drawing {
// Is value type: true
// CS Name: Drawing.StreamSplitter
struct CORDL_TYPE StreamSplitter {
public:
// Declarations
/// @brief Field CommandSizes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CommandSizes, put=setStaticF_CommandSizes)) ::ArrayW<int32_t>  CommandSizes;

/// @brief Field DynamicCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DynamicCommands, put=setStaticF_DynamicCommands)) int32_t  DynamicCommands;

/// @brief Field MetaCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MetaCommands, put=setStaticF_MetaCommands)) int32_t  MetaCommands;

/// @brief Field PopCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PopCommands, put=setStaticF_PopCommands)) int32_t  PopCommands;

/// @brief Field PushCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PushCommands, put=setStaticF_PushCommands)) int32_t  PushCommands;

/// @brief Field StaticCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_StaticCommands, put=setStaticF_StaticCommands)) int32_t  StaticCommands;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x55db0f8, size 0x12fc, virtual true, abstract: false, final true
inline void Execute() ;

static inline ::ArrayW<int32_t> getStaticF_CommandSizes() ;

static inline int32_t getStaticF_DynamicCommands() ;

static inline int32_t getStaticF_MetaCommands() ;

static inline int32_t getStaticF_PopCommands() ;

static inline int32_t getStaticF_PushCommands() ;

static inline int32_t getStaticF_StaticCommands() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

static inline void setStaticF_CommandSizes(::ArrayW<int32_t>  value) ;

static inline void setStaticF_DynamicCommands(int32_t  value) ;

static inline void setStaticF_MetaCommands(int32_t  value) ;

static inline void setStaticF_PopCommands(int32_t  value) ;

static inline void setStaticF_PushCommands(int32_t  value) ;

static inline void setStaticF_StaticCommands(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamSplitter() ;

// Ctor Parameters [CppParam { name: "inputBuffers", ty: "::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "staticBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dynamicBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "persistentBuffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr StreamSplitter(::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  inputBuffers, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  staticBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  dynamicBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  persistentBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27773};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field inputBuffers, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  inputBuffers;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field staticBuffer, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  staticBuffer;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field dynamicBuffer, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  dynamicBuffer;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field persistentBuffer, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  persistentBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::StreamSplitter, inputBuffers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::StreamSplitter, staticBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::StreamSplitter, dynamicBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::StreamSplitter, persistentBuffer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::StreamSplitter) == 0x28, "Size mismatch!");

} // namespace end def Drawing
