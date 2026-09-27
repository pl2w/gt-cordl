#pragma once
// IWYU pragma private; include "Oculus/Interaction/RandomSampleConsensus_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomSampleConsensus_1)
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1_EvaluateModelScore;
}
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1_GenerateModel;
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
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1;
}
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1_EvaluateModelScore;
}
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1_GenerateModel;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::RandomSampleConsensus_1);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::RandomSampleConsensus_1, "Oculus.Interaction", "RandomSampleConsensus`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore, "Oculus.Interaction", "RandomSampleConsensus`1/EvaluateModelScore");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel, "Oculus.Interaction", "RandomSampleConsensus`1/GenerateModel");
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TModel>
// Is value type: false
// CS Name: Oculus.Interaction.RandomSampleConsensus`1<TModel>
class CORDL_TYPE RandomSampleConsensus_1 : public ::System::Object {
public:
// Declarations
using EvaluateModelScore = ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>;

using GenerateModel = ::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>;

/// @brief Field _exclusionZone, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__exclusionZone, put=__cordl_internal_set__exclusionZone)) int32_t  _exclusionZone;

/// @brief Field _maxDataPoints, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDataPoints, put=__cordl_internal_set__maxDataPoints)) int32_t  _maxDataPoints;

/// @brief Field _modelSet, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__modelSet, put=__cordl_internal_set__modelSet)) ::System::Object*  _modelSet;

/// @brief Method FindOptimalModel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TModel FindOptimalModel(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*  modelGenerator, ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*  modelScorer) ;

/// @brief Method FindOptimalModel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TModel FindOptimalModel(::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>*  modelGenerator, ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>*  modelScorer, int32_t  dataPointsCount) ;

static inline ::Oculus::Interaction::RandomSampleConsensus_1<TModel>* New_ctor(int32_t  maxDataPoints, int32_t  exclusionZone) ;

constexpr int32_t const& __cordl_internal_get__exclusionZone() const;

constexpr int32_t& __cordl_internal_get__exclusionZone() ;

constexpr int32_t const& __cordl_internal_get__maxDataPoints() const;

constexpr int32_t& __cordl_internal_get__maxDataPoints() ;

constexpr ::System::Object* const& __cordl_internal_get__modelSet() const;

constexpr ::System::Object*& __cordl_internal_get__modelSet() ;

constexpr void __cordl_internal_set__exclusionZone(int32_t  value) ;

constexpr void __cordl_internal_set__maxDataPoints(int32_t  value) ;

constexpr void __cordl_internal_set__modelSet(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxDataPoints, int32_t  exclusionZone) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomSampleConsensus_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomSampleConsensus_1(RandomSampleConsensus_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomSampleConsensus_1(RandomSampleConsensus_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16037};

/// @brief Field _modelSet, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____modelSet;

/// @brief Field _exclusionZone, offset: 0x18, size: 0x4, def value: None
 int32_t  ____exclusionZone;

/// @brief Field _maxDataPoints, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____maxDataPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction {
// cpp template
template<typename TModel>
// Is value type: false
// CS Name: Oculus.Interaction.RandomSampleConsensus`1/EvaluateModelScore<TModel>
class CORDL_TYPE RandomSampleConsensus_1_EvaluateModelScore : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TModel  model, ::System::Object*  modelSet, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t Invoke(TModel  model, ::System::Object*  modelSet) ;

static inline ::Oculus::Interaction::RandomSampleConsensus_1_EvaluateModelScore<TModel>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomSampleConsensus_1_EvaluateModelScore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1_EvaluateModelScore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomSampleConsensus_1_EvaluateModelScore(RandomSampleConsensus_1_EvaluateModelScore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1_EvaluateModelScore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomSampleConsensus_1_EvaluateModelScore(RandomSampleConsensus_1_EvaluateModelScore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction {
// cpp template
template<typename TModel>
// Is value type: false
// CS Name: Oculus.Interaction.RandomSampleConsensus`1/GenerateModel<TModel>
class CORDL_TYPE RandomSampleConsensus_1_GenerateModel : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  index1, int32_t  index2, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TModel EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TModel Invoke(int32_t  index1, int32_t  index2) ;

static inline ::Oculus::Interaction::RandomSampleConsensus_1_GenerateModel<TModel>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomSampleConsensus_1_GenerateModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1_GenerateModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomSampleConsensus_1_GenerateModel(RandomSampleConsensus_1_GenerateModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomSampleConsensus_1_GenerateModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomSampleConsensus_1_GenerateModel(RandomSampleConsensus_1_GenerateModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
