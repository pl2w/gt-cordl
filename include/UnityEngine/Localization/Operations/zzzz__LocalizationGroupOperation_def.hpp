#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LocalizationGroupOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
CORDL_MODULE_EXPORT(LocalizationGroupOperation)
namespace UnityEngine::Localization::Operations {
class LocalizationGroupOperation___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
class LocalizationGroupOperation;
}
namespace UnityEngine::Localization::Operations {
class LocalizationGroupOperation___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Operations::LocalizationGroupOperation*);
MARK_REF_T(::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::LocalizationGroupOperation*, "UnityEngine.Localization.Operations", "LocalizationGroupOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*, "UnityEngine.Localization.Operations", "LocalizationGroupOperation/<>c");
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LocalizationGroupOperation
class CORDL_TYPE LocalizationGroupOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*  Pool;

/// @brief Method Destroy, addr 0xb04e964, size 0x8c, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method InvokeWaitForCompletion, addr 0xb04e744, size 0x220, virtual true, abstract: false, final false
inline bool InvokeWaitForCompletion() ;

static inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation* New_ctor() ;

/// @brief Method .ctor, addr 0xb04e9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationGroupOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationGroupOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationGroupOperation(LocalizationGroupOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationGroupOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationGroupOperation(LocalizationGroupOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Operations::LocalizationGroupOperation) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LocalizationGroupOperation/<>c
class CORDL_TYPE LocalizationGroupOperation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*  __9;

static inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xb04eba4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation* __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xb04eb9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationGroupOperation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationGroupOperation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationGroupOperation___c(LocalizationGroupOperation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationGroupOperation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationGroupOperation___c(LocalizationGroupOperation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25304};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Operations::LocalizationGroupOperation___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
