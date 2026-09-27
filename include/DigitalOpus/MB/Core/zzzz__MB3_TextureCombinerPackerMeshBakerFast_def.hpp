#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerFast.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerPackerMeshBakerFast)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_ITextureCombinerPacker;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerFast;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerFast");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerFast/<ConvertTexturesToReadableFormats>d__1");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerFast/<CreateAtlases>d__3");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerFast : public ::System::Object {
public:
// Declarations
using _ConvertTexturesToReadableFormats_d__1 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1;

using _CreateAtlases_d__3 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr operator  ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*() noexcept;

/// @brief Method CalculateAtlasRectangles, addr 0x9dd7b48, size 0x14, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast::<ConvertTexturesToReadableFormats>d__1))]
/// @brief Method ConvertTexturesToReadableFormats, addr 0x9dd7ac8, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast::<CreateAtlases>d__3))]
/// @brief Method CreateAtlases, addr 0x9dd7b5c, size 0xf0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast* New_ctor() ;

/// @brief Method Validate, addr 0x9dd7ac0, size 0x8, virtual true, abstract: false, final true
inline bool Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data) ;

/// @brief Method .ctor, addr 0x9dd7c74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* i___DigitalOpus__MB__Core__MB_ITextureCombinerPacker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerFast() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerFast(MB3_TextureCombinerPackerMeshBakerFast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerFast(MB3_TextureCombinerPackerMeshBakerFast const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Texture2D
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast/<CreateAtlases>d__3
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field atlases, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlases, put=__cordl_internal_set_atlases)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  atlases;

/// @brief Field combiner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field packedAtlasRects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_packedAtlasRects, put=__cordl_internal_set_packedAtlasRects)) ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects;

/// @brief Field progressInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field textureEditorMethods, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dd7ce4, size 0xd28, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dd8a0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dd8a14, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dd8a4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dd7ce0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_atlases() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_atlases() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& __cordl_internal_get_packedAtlasRects() const;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& __cordl_internal_get_packedAtlasRects() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_packedAtlasRects(::DigitalOpus::MB::Core::AtlasPackingResult*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dd7c4c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3(MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3(MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22801};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field packedAtlasRects, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::AtlasPackingResult*  ___packedAtlasRects;

/// @brief Field LOG_LEVEL, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field combiner, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field progressInfo, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field atlases, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___atlases;

/// @brief Field textureEditorMethods, offset: 0x50, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___packedAtlasRects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___LOG_LEVEL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___combiner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___progressInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___atlases) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3, ___textureEditorMethods) == 0x50, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3) == 0x58, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast/<ConvertTexturesToReadableFormats>d__1
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dd7c80, size 0x18, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dd7c98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dd7ca0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dd7cd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dd7c7c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dd7b20, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1(MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1(MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22800};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast__ConvertTexturesToReadableFormats_d__1) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
