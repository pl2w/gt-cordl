#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/DeduplicationModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeduplicationModel)
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace Backtrace::Unity::Model {
class DeduplicationModel___c;
}
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class DeduplicationModel;
}
namespace Backtrace::Unity::Model {
class DeduplicationModel___c;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::DeduplicationModel*);
MARK_REF_T(::Backtrace::Unity::Model::DeduplicationModel___c*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::DeduplicationModel*, "Backtrace.Unity.Model", "DeduplicationModel");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::DeduplicationModel___c*, "Backtrace.Unity.Model", "DeduplicationModel/<>c");
// Dependencies Backtrace.Unity.Types.DeduplicationStrategy, System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.DeduplicationModel
class CORDL_TYPE DeduplicationModel : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Model::DeduplicationModel___c;

 __declspec(property(get=get_Classifier)) ::StringW  Classifier;

 __declspec(property(get=get_ExceptionMessage)) ::StringW  ExceptionMessage;

 __declspec(property(get=get_Factor)) ::StringW  Factor;

 __declspec(property(get=get_StackTrace)) ::StringW  StackTrace;

/// @brief Field _backtraceData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__backtraceData, put=__cordl_internal_set__backtraceData)) ::Backtrace::Unity::Model::BacktraceData*  _backtraceData;

/// @brief Field _strategy, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__strategy, put=__cordl_internal_set__strategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  _strategy;

/// @brief Method GetSha, addr 0x5f08124, size 0xec, virtual false, abstract: false, final false
inline ::StringW GetSha() ;

static inline ::Backtrace::Unity::Model::DeduplicationModel* New_ctor(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::Backtrace::Unity::Types::DeduplicationStrategy  strategy) ;

constexpr ::Backtrace::Unity::Model::BacktraceData* const& __cordl_internal_get__backtraceData() const;

constexpr ::Backtrace::Unity::Model::BacktraceData*& __cordl_internal_get__backtraceData() ;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& __cordl_internal_get__strategy() const;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& __cordl_internal_get__strategy() ;

constexpr void __cordl_internal_set__backtraceData(::Backtrace::Unity::Model::BacktraceData*  value) ;

constexpr void __cordl_internal_set__strategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

/// @brief Method .ctor, addr 0x5f080e8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::Backtrace::Unity::Types::DeduplicationStrategy  strategy) ;

/// @brief Method get_Classifier, addr 0x5f152f0, size 0xa8, virtual false, abstract: false, final false
inline ::StringW get_Classifier() ;

/// @brief Method get_ExceptionMessage, addr 0x5f15398, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_ExceptionMessage() ;

/// @brief Method get_Factor, addr 0x5f15408, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Factor() ;

/// @brief Method get_StackTrace, addr 0x5f1505c, size 0x294, virtual false, abstract: false, final false
inline ::StringW get_StackTrace() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeduplicationModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeduplicationModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeduplicationModel(DeduplicationModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeduplicationModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeduplicationModel(DeduplicationModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27608};

/// @brief Field _backtraceData, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceData*  ____backtraceData;

/// @brief Field _strategy, offset: 0x18, size: 0x4, def value: None
 ::Backtrace::Unity::Types::DeduplicationStrategy  ____strategy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::DeduplicationModel, ____backtraceData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::DeduplicationModel, ____strategy) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::DeduplicationModel) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.DeduplicationModel/<>c
class CORDL_TYPE DeduplicationModel___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Model::DeduplicationModel___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_2<::StringW,::StringW>*  __9__4_1;

static inline ::Backtrace::Unity::Model::DeduplicationModel___c* New_ctor() ;

/// @brief Method .ctor, addr 0x5f154a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_StackTrace>b__4_0, addr 0x5f154b0, size 0x14, virtual false, abstract: false, final false
inline ::StringW _get_StackTrace_b__4_0(::Backtrace::Unity::Model::BacktraceStackFrame*  n) ;

/// @brief Method <get_StackTrace>b__4_1, addr 0x5f154c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW _get_StackTrace_b__4_1(::StringW  n) ;

static inline ::Backtrace::Unity::Model::DeduplicationModel___c* getStaticF___9() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>* getStaticF___9__4_0() ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::Backtrace::Unity::Model::DeduplicationModel___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeduplicationModel___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeduplicationModel___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeduplicationModel___c(DeduplicationModel___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeduplicationModel___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeduplicationModel___c(DeduplicationModel___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::DeduplicationModel___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
