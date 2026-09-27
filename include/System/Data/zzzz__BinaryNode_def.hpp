#pragma once
// IWYU pragma private; include "System/Data/BinaryNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryNode)
namespace GlobalNamespace {
struct BinaryNode_DataTypePrecedence;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ExpressionNode;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class BinaryNode;
}
// Write type traits
MARK_REF_T(::System::Data::BinaryNode*);
DEFINE_IL2CPP_CLASS(::System::Data::BinaryNode*, "System.Data", "BinaryNode");
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.BinaryNode
class CORDL_TYPE BinaryNode : public ::System::Data::ExpressionNode {
public:
// Declarations
using DataTypePrecedence = ::GlobalNamespace::BinaryNode_DataTypePrecedence;

/// @brief Field _left, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__left, put=__cordl_internal_set__left)) ::System::Data::ExpressionNode*  _left;

/// @brief Field _op, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__op, put=__cordl_internal_set__op)) int32_t  _op;

/// @brief Field _right, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__right, put=__cordl_internal_set__right)) ::System::Data::ExpressionNode*  _right;

/// @brief Method BinaryCompare, addr 0xa93d7bc, size 0x8, virtual false, abstract: false, final false
inline int32_t BinaryCompare(::System::Object*  vLeft, ::System::Object*  vRight, ::System::Data::Common::StorageType  resultType, int32_t  op) ;

/// @brief Method BinaryCompare, addr 0xa93d7c4, size 0xfe8, virtual false, abstract: false, final false
inline int32_t BinaryCompare(::System::Object*  vLeft, ::System::Object*  vRight, ::System::Data::Common::StorageType  resultType, int32_t  op, ::System::Globalization::CompareInfo*  comparer) ;

/// @brief Method Bind, addr 0xa9377dc, size 0x70, virtual true, abstract: false, final false
inline void Bind(::System::Data::DataTable*  table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*  list) ;

/// @brief Method DependsOn, addr 0xa93d174, size 0x64, virtual true, abstract: false, final false
inline bool DependsOn(::System::Data::DataColumn*  column) ;

/// @brief Method Eval, addr 0xa93784c, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Eval() ;

/// @brief Method Eval, addr 0xa93d784, size 0x38, virtual false, abstract: false, final false
static inline ::System::Object* Eval(::System::Data::ExpressionNode*  expr, ::System::Data::DataRow*  row, ::System::Data::DataRowVersion  version, ::ArrayW<int32_t>  recordNos) ;

/// @brief Method Eval, addr 0xa93d038, size 0x1c, virtual true, abstract: false, final false
inline ::System::Object* Eval(::ArrayW<int32_t>  recordNos) ;

/// @brief Method Eval, addr 0xa937860, size 0x1c, virtual true, abstract: false, final false
inline ::System::Object* Eval(::System::Data::DataRow*  row, ::System::Data::DataRowVersion  version) ;

/// @brief Method EvalBinaryOp, addr 0xa93787c, size 0x57bc, virtual false, abstract: false, final false
inline ::System::Object* EvalBinaryOp(int32_t  op, ::System::Data::ExpressionNode*  left, ::System::Data::ExpressionNode*  right, ::System::Data::DataRow*  row, ::System::Data::DataRowVersion  version, ::ArrayW<int32_t>  recordNos) ;

/// @brief Method GetPrecedence, addr 0xa93f210, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::BinaryNode_DataTypePrecedence GetPrecedence(::System::Data::Common::StorageType  storageType) ;

/// @brief Method GetPrecedenceType, addr 0xa93f234, size 0x24, virtual false, abstract: false, final false
static inline ::System::Data::Common::StorageType GetPrecedenceType(::GlobalNamespace::BinaryNode_DataTypePrecedence  code) ;

/// @brief Method HasLocalAggregate, addr 0xa93d0e4, size 0x48, virtual true, abstract: false, final false
inline bool HasLocalAggregate() ;

/// @brief Method HasRemoteAggregate, addr 0xa93d12c, size 0x48, virtual true, abstract: false, final false
inline bool HasRemoteAggregate() ;

/// @brief Method IsConstant, addr 0xa93d054, size 0x48, virtual true, abstract: false, final false
inline bool IsConstant() ;

/// @brief Method IsMixed, addr 0xa93f258, size 0x7c, virtual false, abstract: false, final false
inline bool IsMixed(::System::Data::Common::StorageType  left, ::System::Data::Common::StorageType  right) ;

/// @brief Method IsMixedSql, addr 0xa93f314, size 0x84, virtual false, abstract: false, final false
inline bool IsMixedSql(::System::Data::Common::StorageType  left, ::System::Data::Common::StorageType  right) ;

/// @brief Method IsTableConstant, addr 0xa93d09c, size 0x48, virtual true, abstract: false, final false
inline bool IsTableConstant() ;

static inline ::System::Data::BinaryNode* New_ctor(::System::Data::DataTable*  table, int32_t  op, ::System::Data::ExpressionNode*  left, ::System::Data::ExpressionNode*  right) ;

/// @brief Method Optimize, addr 0xa93d1d8, size 0x250, virtual true, abstract: false, final false
inline ::System::Data::ExpressionNode* Optimize() ;

/// @brief Method ResultSqlType, addr 0xa93ea9c, size 0x3d8, virtual false, abstract: false, final false
inline ::System::Data::Common::StorageType ResultSqlType(::System::Data::Common::StorageType  left, ::System::Data::Common::StorageType  right, bool  lc, bool  rc, int32_t  op) ;

/// @brief Method ResultType, addr 0xa93ee74, size 0x37c, virtual false, abstract: false, final false
inline ::System::Data::Common::StorageType ResultType(::System::Data::Common::StorageType  left, ::System::Data::Common::StorageType  right, bool  lc, bool  rc, int32_t  op) ;

/// @brief Method SetTypeMismatchError, addr 0xa93d750, size 0x34, virtual false, abstract: false, final false
inline void SetTypeMismatchError(int32_t  op, ::System::Type*  left, ::System::Type*  right) ;

/// @brief Method SqlResultType, addr 0xa93f3f4, size 0x30, virtual false, abstract: false, final false
inline int32_t SqlResultType(int32_t  typeCode) ;

constexpr ::System::Data::ExpressionNode* const& __cordl_internal_get__left() const;

constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__left() ;

constexpr int32_t const& __cordl_internal_get__op() const;

constexpr int32_t& __cordl_internal_get__op() ;

constexpr ::System::Data::ExpressionNode* const& __cordl_internal_get__right() const;

constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__right() ;

constexpr void __cordl_internal_set__left(::System::Data::ExpressionNode*  value) ;

constexpr void __cordl_internal_set__op(int32_t  value) ;

constexpr void __cordl_internal_set__right(::System::Data::ExpressionNode*  value) ;

/// @brief Method .ctor, addr 0xa937774, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataTable*  table, int32_t  op, ::System::Data::ExpressionNode*  left, ::System::Data::ExpressionNode*  right) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryNode(BinaryNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryNode(BinaryNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21010};

/// @brief Field _op, offset: 0x18, size: 0x4, def value: None
 int32_t  ____op;

/// @brief Field _left, offset: 0x20, size: 0x8, def value: None
 ::System::Data::ExpressionNode*  ____left;

/// @brief Field _right, offset: 0x28, size: 0x8, def value: None
 ::System::Data::ExpressionNode*  ____right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::BinaryNode, ____op) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____right) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Data::BinaryNode) == 0x30, "Size mismatch!");

} // namespace end def System::Data
