#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureConfigBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FeatureConfigBuilder)
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class FeatureConfigBuilder_BuildCondition_1;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
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
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate;
}
namespace Oculus::Interaction::PoseDetection {
class FeatureConfigBuilder;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TBuildState>
class FeatureConfigBuilder_BuildCondition_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate, "Oculus.Interaction.PoseDetection", "FeatureConfigBuilder/BuildCondition`1/BuildStateDelegate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder*, "Oculus.Interaction.PoseDetection", "FeatureConfigBuilder");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1, "Oculus.Interaction.PoseDetection", "FeatureConfigBuilder/BuildCondition`1");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureConfigBuilder
class CORDL_TYPE FeatureConfigBuilder : public ::System::Object {
public:
// Declarations
template<typename TBuildState>
using BuildCondition_1 = ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder* New_ctor() ;

/// @brief Method .ctor, addr 0xa499124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureConfigBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureConfigBuilder(FeatureConfigBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureConfigBuilder(FeatureConfigBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FeatureConfigBuilder) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TBuildState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureConfigBuilder/BuildCondition`1<TBuildState>
class CORDL_TYPE FeatureConfigBuilder_BuildCondition_1 : public ::System::Object {
public:
// Declarations
using BuildStateDelegate = ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>;

 __declspec(property(get=get_Is)) TBuildState  Is;

 __declspec(property(get=get_IsNot)) TBuildState  IsNot;

/// @brief Field _buildStateFn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buildStateFn, put=__cordl_internal_set__buildStateFn)) ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  _buildStateFn;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBuilder_BuildCondition_1<TBuildState>* New_ctor(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  buildStateFn) ;

constexpr ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>* const& __cordl_internal_get__buildStateFn() const;

constexpr ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*& __cordl_internal_get__buildStateFn() ;

constexpr void __cordl_internal_set__buildStateFn(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  buildStateFn) ;

/// @brief Method get_Is, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TBuildState get_Is() ;

/// @brief Method get_IsNot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TBuildState get_IsNot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureConfigBuilder_BuildCondition_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBuilder_BuildCondition_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureConfigBuilder_BuildCondition_1(FeatureConfigBuilder_BuildCondition_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBuilder_BuildCondition_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureConfigBuilder_BuildCondition_1(FeatureConfigBuilder_BuildCondition_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16087};

/// @brief Field _buildStateFn, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>*  ____buildStateFn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TBuildState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureConfigBuilder/BuildCondition`1/BuildStateDelegate<TBuildState>
class CORDL_TYPE BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TBuildState EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TBuildState Invoke(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode) ;

static inline ::Oculus::Interaction::PoseDetection::BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate<TBuildState>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate(BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate(BuildCondition_1_FeatureConfigBuilder_BuildStateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
