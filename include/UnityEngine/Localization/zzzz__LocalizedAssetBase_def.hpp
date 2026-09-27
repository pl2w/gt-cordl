#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedAssetBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedReference_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAssetBase)
namespace UnityEngine::Localization {
class LocalizedAssetBase_UxmlSerializedData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedAssetBase;
}
namespace UnityEngine::Localization {
class LocalizedAssetBase_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedAssetBase*);
MARK_REF_T(::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedAssetBase*, "UnityEngine.Localization", "LocalizedAssetBase");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedAssetBase/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedReference, UnityEngine.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAssetBase
class CORDL_TYPE LocalizedAssetBase : public ::UnityEngine::Localization::LocalizedReference {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData;

/// @brief Method LoadAssetAsObjectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>> LoadAssetAsObjectAsync() ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() ;

static inline ::UnityEngine::Localization::LocalizedAssetBase* New_ctor() ;

/// @brief Method .ctor, addr 0xb00f35c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetBase(LocalizedAssetBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetBase(LocalizedAssetBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedAssetBase) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedReference::UxmlSerializedData
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAssetBase/UxmlSerializedData
class CORDL_TYPE LocalizedAssetBase_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedReference_UxmlSerializedData {
public:
// Declarations
static inline ::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData* New_ctor() ;

/// @brief Method .ctor, addr 0xb00f394, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetBase_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBase_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetBase_UxmlSerializedData(LocalizedAssetBase_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBase_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetBase_UxmlSerializedData(LocalizedAssetBase_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
