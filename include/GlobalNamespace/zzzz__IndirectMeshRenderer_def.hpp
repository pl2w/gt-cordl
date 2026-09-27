#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectMeshRenderer)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class IndirectMeshInstance;
}
namespace GlobalNamespace {
struct IndirectMeshRenderer_BatchKey;
}
namespace GlobalNamespace {
struct IndirectMeshRenderer_DrawBatch;
}
namespace GlobalNamespace {
struct IndirectMeshRenderer_DynamicEntry;
}
namespace GlobalNamespace {
class IndirectMeshRenderer_PostTickCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class IndirectMeshRenderer;
}
namespace GlobalNamespace {
class IndirectMeshRenderer_PostTickCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IndirectMeshRenderer*);
MARK_REF_T(::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshRenderer*, "", "IndirectMeshRenderer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*, "", "IndirectMeshRenderer/PostTickCallback");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndirectMeshRenderer
class CORDL_TYPE IndirectMeshRenderer : public ::System::Object {
public:
// Declarations
using BatchKey = ::GlobalNamespace::IndirectMeshRenderer_BatchKey;

using DrawBatch = ::GlobalNamespace::IndirectMeshRenderer_DrawBatch;

using DynamicEntry = ::GlobalNamespace::IndirectMeshRenderer_DynamicEntry;

using PostTickCallback = ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback;

/// @brief Field _batchList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__batchList, put=setStaticF__batchList)) ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*  _batchList;

/// @brief Field _batchLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__batchLookup, put=setStaticF__batchLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*  _batchLookup;

/// @brief Field _loggedFirstRender, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__loggedFirstRender, put=setStaticF__loggedFirstRender)) bool  _loggedFirstRender;

/// @brief Field _shader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__shader, put=setStaticF__shader)) ::UnityW<::UnityEngine::Shader>  _shader;

/// @brief Field _shaderEmissive, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__shaderEmissive, put=setStaticF__shaderEmissive)) ::UnityW<::UnityEngine::Shader>  _shaderEmissive;

/// @brief Field _spId_Matrices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__spId_Matrices, put=setStaticF__spId_Matrices)) int32_t  _spId_Matrices;

/// @brief Method Register, addr 0x5694a48, size 0xc90, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::IndirectMeshInstance*  inst, int32_t  groupId) ;

/// @brief Method SetGroupVisible, addr 0x56944b8, size 0x344, virtual false, abstract: false, final false
static inline void SetGroupVisible(int32_t  groupId, bool  visible) ;

/// @brief Method _CopyEmissionProperties, addr 0x5695b0c, size 0x358, virtual false, abstract: false, final false
static inline void _CopyEmissionProperties(::UnityEngine::Material*  dst, ::UnityEngine::Material*  src) ;

/// @brief Method _DisposeAll, addr 0x5695988, size 0x17c, virtual false, abstract: false, final false
static inline void _DisposeAll() ;

/// @brief Method _DisposeBatch, addr 0x5696db8, size 0x1c4, virtual false, abstract: false, final false
static inline void _DisposeBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch) ;

/// @brief Method _DisposeBatchBuffers, addr 0x56964f4, size 0x58, virtual false, abstract: false, final false
static inline void _DisposeBatchBuffers(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method _Init, addr 0x56956e0, size 0x2a8, virtual false, abstract: false, final false
static inline void _Init() ;

/// @brief Method _RebuildBatch, addr 0x569654c, size 0x5d4, virtual false, abstract: false, final false
static inline void _RebuildBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch) ;

/// @brief Method _Render, addr 0x5695e64, size 0x690, virtual false, abstract: false, final false
static inline void _Render() ;

/// @brief Method _UploadBatch, addr 0x5696b20, size 0x298, virtual false, abstract: false, final false
static inline void _UploadBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>* getStaticF__batchList() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>* getStaticF__batchLookup() ;

static inline bool getStaticF__loggedFirstRender() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF__shader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF__shaderEmissive() ;

static inline int32_t getStaticF__spId_Matrices() ;

static inline void setStaticF__batchList(::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*  value) ;

static inline void setStaticF__batchLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*  value) ;

static inline void setStaticF__loggedFirstRender(bool  value) ;

static inline void setStaticF__shader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF__shaderEmissive(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF__spId_Matrices(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectMeshRenderer(IndirectMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectMeshRenderer(IndirectMeshRenderer const& ) = delete;

/// @brief Field SHADER_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_NAME{u"GorillaTag/IndirectLit"};

/// @brief Field SHADER_NAME_EMISSIVE offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_NAME_EMISSIVE{u"GorillaTag/IndirectLitEmissive"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{898};

/// @brief Field _k_instancesPerXform offset 0xffffffff size 0x4
static constexpr int32_t  _k_instancesPerXform{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IndirectMeshRenderer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndirectMeshRenderer/PostTickCallback
class CORDL_TYPE IndirectMeshRenderer_PostTickCallback : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

static inline ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback* New_ctor() ;

/// @brief Method PostTick, addr 0x5697190, size 0x4c, virtual true, abstract: false, final true
inline void PostTick() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5695b04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x5697180, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x5697188, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshRenderer_PostTickCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshRenderer_PostTickCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectMeshRenderer_PostTickCallback(IndirectMeshRenderer_PostTickCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshRenderer_PostTickCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectMeshRenderer_PostTickCallback(IndirectMeshRenderer_PostTickCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{897};

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_PostTickCallback, ____PostTickRunning_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndirectMeshRenderer_PostTickCallback) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
