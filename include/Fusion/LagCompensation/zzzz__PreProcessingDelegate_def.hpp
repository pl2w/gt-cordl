#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/PreProcessingDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreProcessingDelegate)
namespace Fusion::LagCompensation {
class Query;
}
namespace Fusion {
class HitboxRoot;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class PreProcessingDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::PreProcessingDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::PreProcessingDelegate*, "Fusion.LagCompensation", "PreProcessingDelegate");
// Dependencies System.MulticastDelegate
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.PreProcessingDelegate
class CORDL_TYPE PreProcessingDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x601bd48, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x601bd7c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x601bd34, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices) ;

static inline ::Fusion::LagCompensation::PreProcessingDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x601bc28, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreProcessingDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreProcessingDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreProcessingDelegate(PreProcessingDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreProcessingDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreProcessingDelegate(PreProcessingDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LagCompensation::PreProcessingDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
