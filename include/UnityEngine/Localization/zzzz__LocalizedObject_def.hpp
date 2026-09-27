#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedObject)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedObject_UxmlSerializedData;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedObject;
}
namespace UnityEngine::Localization {
class LocalizedObject_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedObject*);
MARK_REF_T(::UnityEngine::Localization::LocalizedObject_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedObject*, "UnityEngine.Localization", "LocalizedObject");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedObject_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedObject/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedObject
class CORDL_TYPE LocalizedObject : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Object>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedObject_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedObject* New_ctor() ;

/// @brief Method .ctor, addr 0xb00ee2c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedObject(LocalizedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedObject(LocalizedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25029};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedObject) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedObject/UxmlSerializedData
class CORDL_TYPE LocalizedObject_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Object>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00ee78, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedObject_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00ee74, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00eec8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedObject_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedObject_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedObject_UxmlSerializedData(LocalizedObject_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedObject_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedObject_UxmlSerializedData(LocalizedObject_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25028};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedObject_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
