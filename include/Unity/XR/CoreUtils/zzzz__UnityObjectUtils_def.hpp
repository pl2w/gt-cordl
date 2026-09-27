#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/UnityObjectUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class UnityObjectUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::UnityObjectUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::UnityObjectUtils*, "Unity.XR.CoreUtils", "UnityObjectUtils");
// Dependencies System.Object, UnityEngine.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.UnityObjectUtils
class CORDL_TYPE UnityObjectUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertUnityObjectToType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline T ConvertUnityObjectToType(::UnityEngine::Object*  objectIn) ;

/// @brief Method Destroy, addr 0xb3faba4, size 0x94, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj, bool  withUndo) ;

/// @brief Method RemoveDestroyedKeys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
requires(::cordl_internals::type_constraint<TKey, ::UnityEngine::Object*>)
static inline void RemoveDestroyedKeys(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary) ;

/// @brief Method RemoveDestroyedObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline void RemoveDestroyedObjects(::System::Collections::Generic::List_1<T>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectUtils(UnityObjectUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectUtils(UnityObjectUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::UnityObjectUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
