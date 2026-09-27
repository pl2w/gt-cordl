#pragma once
// IWYU pragma private; include "System/Data/ExceptionBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionBuilder)
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowState;
}
namespace System::Data {
struct DataSetDateTime;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ForeignKeyConstraint;
}
namespace System::Data {
struct RBTreeError;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
class UniqueConstraint;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExceptionBuilder;
}
// Write type traits
MARK_REF_T(::System::Data::ExceptionBuilder*);
DEFINE_IL2CPP_CLASS(::System::Data::ExceptionBuilder*, "System.Data", "ExceptionBuilder");
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExceptionBuilder
class CORDL_TYPE ExceptionBuilder : public ::System::Object {
public:
// Declarations
/// @brief Method AddExternalObject, addr 0xa903f18, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AddExternalObject() ;

/// @brief Method AddNewNotAllowNull, addr 0xa903d88, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AddNewNotAllowNull() ;

/// @brief Method AddPrimaryKeyConstraint, addr 0xa9030b8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AddPrimaryKeyConstraint() ;

/// @brief Method AggregateException, addr 0xa905a64, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateException(::System::Data::AggregateType  aggregateType, ::System::Type*  type) ;

/// @brief Method ArgumentContainsNull, addr 0xa902a6c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentContainsNull(::StringW  paramName) ;

/// @brief Method ArgumentNull, addr 0xa8fa340, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentNull(::StringW  paramName) ;

/// @brief Method ArgumentOutOfRange, addr 0xa9029cc, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method AttributeValues, addr 0xa905f18, size 0x64, virtual false, abstract: false, final false
static inline ::System::Exception* AttributeValues(::StringW  name, ::StringW  value1, ::StringW  value2) ;

/// @brief Method AutoIncrementAndDefaultValue, addr 0xa8fb540, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AutoIncrementAndDefaultValue() ;

/// @brief Method AutoIncrementAndExpression, addr 0xa8fb500, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AutoIncrementAndExpression() ;

/// @brief Method AutoIncrementCannotSetIfHasData, addr 0xa8fb818, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* AutoIncrementCannotSetIfHasData(::StringW  typeName) ;

/// @brief Method AutoIncrementSeed, addr 0xa901304, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AutoIncrementSeed() ;

/// @brief Method BadObjectPropertyAccess, addr 0xa902a20, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* BadObjectPropertyAccess(::StringW  error) ;

/// @brief Method BeginEditInRowChanging, addr 0xa904744, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* BeginEditInRowChanging() ;

/// @brief Method CanNotBindTable, addr 0xa903cc8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotBindTable() ;

/// @brief Method CanNotClear, addr 0xa903f58, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotClear() ;

/// @brief Method CanNotDelete, addr 0xa903e48, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotDelete() ;

/// @brief Method CanNotDeserializeObjectType, addr 0xa906544, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotDeserializeObjectType() ;

/// @brief Method CanNotRemoteDataTable, addr 0xa905958, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotRemoteDataTable() ;

/// @brief Method CanNotSerializeDataTableHierarchy, addr 0xa905918, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotSerializeDataTableHierarchy() ;

/// @brief Method CanNotSerializeDataTableWithEmptyName, addr 0xa9059d8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotSerializeDataTableWithEmptyName() ;

/// @brief Method CanNotSetRemotingFormat, addr 0xa905998, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotSetRemotingFormat() ;

/// @brief Method CanNotSetTable, addr 0xa903c48, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotSetTable() ;

/// @brief Method CanNotUse, addr 0xa903c88, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotUse() ;

/// @brief Method CanNotUseDataViewManager, addr 0xa903c08, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CanNotUseDataViewManager() ;

/// @brief Method CancelEditInRowChanging, addr 0xa904784, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CancelEditInRowChanging() ;

/// @brief Method CannotAddColumn1, addr 0xa902db8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddColumn1(::StringW  column) ;

/// @brief Method CannotAddColumn2, addr 0xa902e04, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddColumn2(::StringW  column) ;

/// @brief Method CannotAddColumn3, addr 0xa8ff78c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddColumn3() ;

/// @brief Method CannotAddColumn4, addr 0xa8ff7cc, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddColumn4(::StringW  column) ;

/// @brief Method CannotAddDuplicate, addr 0xa902e50, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddDuplicate(::StringW  column) ;

/// @brief Method CannotAddDuplicate2, addr 0xa902e9c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddDuplicate2(::StringW  table) ;

/// @brief Method CannotAddDuplicate3, addr 0xa902ee8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAddDuplicate3(::StringW  table) ;

/// @brief Method CannotChangeCaseLocale, addr 0xa9053e0, size 0x8, virtual false, abstract: false, final false
static inline ::System::Exception* CannotChangeCaseLocale() ;

/// @brief Method CannotChangeCaseLocale, addr 0xa9053e8, size 0x48, virtual false, abstract: false, final false
static inline ::System::Exception* CannotChangeCaseLocale(::System::Exception*  innerException) ;

/// @brief Method CannotChangeNamespace, addr 0xa8fe894, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotChangeNamespace(::StringW  columnName) ;

/// @brief Method CannotConvert, addr 0xa906464, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotConvert(::StringW  name, ::StringW  type) ;

/// @brief Method CannotInstantiateAbstract, addr 0xa9062a8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotInstantiateAbstract(::StringW  name) ;

/// @brief Method CannotModifyCollection, addr 0xa902b28, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CannotModifyCollection() ;

/// @brief Method CannotRemoveChildKey, addr 0xa902fb4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotRemoveChildKey(::StringW  relation) ;

/// @brief Method CannotRemoveColumn, addr 0xa902f34, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CannotRemoveColumn() ;

/// @brief Method CannotRemoveConstraint, addr 0xa903000, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotRemoveConstraint(::StringW  constraint, ::StringW  table) ;

/// @brief Method CannotRemoveExpression, addr 0xa90305c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotRemoveExpression(::StringW  column, ::StringW  expression) ;

/// @brief Method CannotRemovePrimaryKey, addr 0xa902f74, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CannotRemovePrimaryKey() ;

/// @brief Method CannotSetDateTimeModeForNonDateTimeColumns, addr 0xa8fd714, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetDateTimeModeForNonDateTimeColumns() ;

/// @brief Method CannotSetMaxLength, addr 0xa8fe660, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetMaxLength(::System::Data::DataColumn*  column, int32_t  value) ;

/// @brief Method CannotSetMaxLength2, addr 0xa8fe26c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetMaxLength2(::System::Data::DataColumn*  column) ;

/// @brief Method CannotSetSimpleContent, addr 0xa8ff730, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetSimpleContent(::StringW  columnName, ::System::Type*  type) ;

/// @brief Method CannotSetSimpleContentType, addr 0xa8fd590, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetSimpleContentType(::StringW  columnName, ::System::Type*  type) ;

/// @brief Method CannotSetToNull, addr 0xa9039d8, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CannotSetToNull(::System::Data::DataColumn*  column) ;

/// @brief Method CantAddConstraintToMultipleNestedTable, addr 0xa9038ec, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CantAddConstraintToMultipleNestedTable(::StringW  tableName) ;

/// @brief Method CantChangeDataType, addr 0xa8fce4c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CantChangeDataType() ;

/// @brief Method CantChangeDateTimeMode, addr 0xa8fd754, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Exception* CantChangeDateTimeMode(::System::Data::DataSetDateTime  oldValue, ::System::Data::DataSetDateTime  newValue) ;

/// @brief Method CaseInsensitiveNameConflict, addr 0xa902b68, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CaseInsensitiveNameConflict(::StringW  name) ;

/// @brief Method CaseLocaleMismatch, addr 0xa9053a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CaseLocaleMismatch() ;

/// @brief Method ChildTableMismatch, addr 0xa905320, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ChildTableMismatch() ;

/// @brief Method CircularComplexType, addr 0xa90625c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* CircularComplexType(::StringW  name) ;

/// @brief Method ColumnNameRequired, addr 0xa8fca20, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnNameRequired() ;

/// @brief Method ColumnNotInAnyTable, addr 0xa902c9c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnNotInAnyTable() ;

/// @brief Method ColumnNotInTheTable, addr 0xa902c40, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnNotInTheTable(::StringW  column, ::StringW  table) ;

/// @brief Method ColumnOutOfRange, addr 0xa902d6c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnOutOfRange(::StringW  column) ;

/// @brief Method ColumnOutOfRange, addr 0xa902cdc, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnOutOfRange(int32_t  index) ;

/// @brief Method ColumnToSortIsOutOfRange, addr 0xa904018, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnToSortIsOutOfRange(::StringW  column) ;

/// @brief Method ColumnTypeConflict, addr 0xa906418, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnTypeConflict(::StringW  name) ;

/// @brief Method ColumnTypeNotSupported, addr 0xa8fa394, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnTypeNotSupported() ;

/// @brief Method ColumnsTypeMismatch, addr 0xa8fd01c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ColumnsTypeMismatch() ;

/// @brief Method ConstraintAddFailed, addr 0xa90368c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintAddFailed(::System::Data::DataTable*  table) ;

/// @brief Method ConstraintForeignTable, addr 0xa90360c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintForeignTable() ;

/// @brief Method ConstraintOutOfRange, addr 0xa90341c, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintOutOfRange(int32_t  index) ;

/// @brief Method ConstraintParentValues, addr 0xa90364c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintParentValues() ;

/// @brief Method ConstraintRemoveFailed, addr 0xa9036e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintRemoveFailed() ;

/// @brief Method ConstraintViolation, addr 0xa90340c, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintViolation(::ArrayW<::System::Data::DataColumn*>  columns, ::ArrayW<::System::Object*>  values) ;

/// @brief Method ConstraintViolation, addr 0xa903138, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ConstraintViolation(::StringW  constraint) ;

/// @brief Method ConvertFailed, addr 0xa906818, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* ConvertFailed(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method CreateChildView, addr 0xa903e08, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CreateChildView() ;

/// @brief Method DataSetUnsupportedSchema, addr 0xa904d54, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DataSetUnsupportedSchema(::StringW  ns) ;

/// @brief Method DataTableInferenceNotSupported, addr 0xa9066e8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DataTableInferenceNotSupported() ;

/// @brief Method DatasetConflictingName, addr 0xa9056b8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DatasetConflictingName(::StringW  table) ;

/// @brief Method DatatypeNotDefined, addr 0xa906144, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DatatypeNotDefined() ;

/// @brief Method DefaultValueAndAutoIncrement, addr 0xa8fd854, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DefaultValueAndAutoIncrement() ;

/// @brief Method DefaultValueColumnDataType, addr 0xa8fd894, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Exception* DefaultValueColumnDataType(::StringW  column, ::System::Type*  defaultType, ::System::Type*  columnType, ::System::Exception*  inner) ;

/// @brief Method DefaultValueDataType, addr 0xa8fd47c, size 0x114, virtual false, abstract: false, final false
static inline ::System::Exception* DefaultValueDataType(::StringW  column, ::System::Type*  defaultType, ::System::Type*  columnType, ::System::Exception*  inner) ;

/// @brief Method DeleteInRowDeleting, addr 0xa9047c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DeleteInRowDeleting() ;

/// @brief Method DeletedRowInaccessible, addr 0xa904944, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DeletedRowInaccessible() ;

/// @brief Method DiffgramMissingSQL, addr 0xa90638c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* DiffgramMissingSQL() ;

/// @brief Method DiffgramMissingTable, addr 0xa906340, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DiffgramMissingTable(::StringW  name) ;

/// @brief Method DuplicateConstraint, addr 0xa9034ac, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateConstraint(::StringW  constraint) ;

/// @brief Method DuplicateConstraintName, addr 0xa9034f8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateConstraintName(::StringW  constraint) ;

/// @brief Method DuplicateConstraintRead, addr 0xa9063cc, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateConstraintRead(::StringW  str) ;

/// @brief Method DuplicateDeclaration, addr 0xa906788, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateDeclaration(::StringW  name) ;

/// @brief Method DuplicateRelation, addr 0xa9051d4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateRelation(::StringW  relation) ;

/// @brief Method DuplicateTableName, addr 0xa9055c4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateTableName(::StringW  table) ;

/// @brief Method DuplicateTableName2, addr 0xa905610, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateTableName2(::StringW  table, ::StringW  ns) ;

/// @brief Method EditInRowChanging, addr 0xa9046c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EditInRowChanging() ;

/// @brief Method ElementTypeNotFound, addr 0xa905f7c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ElementTypeNotFound(::StringW  name) ;

/// @brief Method EndEditInRowChanging, addr 0xa904704, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EndEditInRowChanging() ;

/// @brief Method EnforceConstraint, addr 0xa905360, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EnforceConstraint() ;

/// @brief Method EnumeratorModified, addr 0xa906978, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EnumeratorModified() ;

/// @brief Method ExpressionAndConstraint, addr 0xa8fda00, size 0x78, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionAndConstraint(::System::Data::DataColumn*  column, ::System::Data::Constraint*  constraint) ;

/// @brief Method ExpressionAndReadOnly, addr 0xa8fdbb4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionAndReadOnly() ;

/// @brief Method ExpressionAndUnique, addr 0xa8fd9c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionAndUnique() ;

/// @brief Method ExpressionCircular, addr 0xa8fdbf4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionCircular() ;

/// @brief Method ExpressionInConstraint, addr 0xa903938, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionInConstraint(::System::Data::DataColumn*  column) ;

/// @brief Method FailedCascadeDelete, addr 0xa903720, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* FailedCascadeDelete(::StringW  constraint) ;

/// @brief Method FailedCascadeUpdate, addr 0xa90376c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* FailedCascadeUpdate(::StringW  constraint) ;

/// @brief Method FailedClearParentTable, addr 0xa9037b8, size 0x64, virtual false, abstract: false, final false
static inline ::System::Exception* FailedClearParentTable(::StringW  table, ::StringW  constraint, ::StringW  childTable) ;

/// @brief Method ForeignKeyViolation, addr 0xa90381c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* ForeignKeyViolation(::StringW  constraint, ::ArrayW<::System::Object*>  keys) ;

/// @brief Method ForeignRelation, addr 0xa904280, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ForeignRelation() ;

/// @brief Method FoundEntity, addr 0xa9067d4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* FoundEntity() ;

/// @brief Method GetElementIndex, addr 0xa903e88, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* GetElementIndex(int32_t  index) ;

/// @brief Method GetParentRowTableMismatch, addr 0xa90435c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* GetParentRowTableMismatch(::StringW  t1, ::StringW  t2) ;

/// @brief Method HasToBeStringType, addr 0xa8fe2c0, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* HasToBeStringType(::System::Data::DataColumn*  column) ;

/// @brief Method IComparableNotImplemented, addr 0xa903a78, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* IComparableNotImplemented(::StringW  typeName) ;

/// @brief Method INullableUDTwithoutStaticNull, addr 0xa903a2c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* INullableUDTwithoutStaticNull(::StringW  typeName) ;

/// @brief Method InValidNestedRelation, addr 0xa9045ac, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InValidNestedRelation(::StringW  childTableName) ;

/// @brief Method IndexKeyLength, addr 0xa904f2c, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Exception* IndexKeyLength(int32_t  length, int32_t  keyLength) ;

/// @brief Method InsertExternalObject, addr 0xa903f98, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InsertExternalObject() ;

/// @brief Method InternalRBTreeError, addr 0xa906904, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* InternalRBTreeError(::System::Data::RBTreeError  internalError) ;

/// @brief Method InvalidAttributeValue, addr 0xa905ebc, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidAttributeValue(::StringW  name, ::StringW  value) ;

/// @brief Method InvalidDataColumnMapping, addr 0xa903b10, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDataColumnMapping(::System::Type*  type) ;

/// @brief Method InvalidDateTimeMode, addr 0xa8fd80c, size 0x48, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDateTimeMode(::System::Data::DataSetDateTime  mode) ;

/// @brief Method InvalidDuplicateNamedSimpleTypeDelaration, addr 0xa9068a8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDuplicateNamedSimpleTypeDelaration(::StringW  stName, ::StringW  errorStr) ;

/// @brief Method InvalidField, addr 0xa9061c4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidField(::StringW  name) ;

/// @brief Method InvalidKey, addr 0xa9062f4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidKey(::StringW  name) ;

/// @brief Method InvalidOffsetLength, addr 0xa902c00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidOffsetLength() ;

/// @brief Method InvalidParentNamespaceinNestedRelation, addr 0xa9045f8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidParentNamespaceinNestedRelation(::StringW  childTableName) ;

/// @brief Method InvalidPrefix, addr 0xa8fccc0, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidPrefix(::StringW  name) ;

/// @brief Method InvalidRemotingFormat, addr 0xa905430, size 0x48, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidRemotingFormat(::System::Data::SerializationFormat  mode) ;

/// @brief Method InvalidRowBitPattern, addr 0xa904c88, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidRowBitPattern() ;

/// @brief Method InvalidRowState, addr 0xa904c40, size 0x48, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidRowState(::System::Data::DataRowState  state) ;

/// @brief Method InvalidRowVersion, addr 0xa904a04, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidRowVersion() ;

/// @brief Method InvalidSelector, addr 0xa906210, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidSelector(::StringW  name) ;

/// @brief Method InvalidSortString, addr 0xa905578, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidSortString(::StringW  sort) ;

/// @brief Method InvalidStorageType, addr 0xa905b1c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidStorageType(::System::TypeCode  typecode) ;

/// @brief Method IsDataSetAttributeMissingInSchema, addr 0xa906584, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* IsDataSetAttributeMissingInSchema() ;

/// @brief Method KeyColumnsIdentical, addr 0xa9042c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* KeyColumnsIdentical() ;

/// @brief Method KeyDuplicateColumns, addr 0xa904174, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* KeyDuplicateColumns(::StringW  columnName) ;

/// @brief Method KeyLengthMismatch, addr 0xa904200, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* KeyLengthMismatch() ;

/// @brief Method KeyLengthZero, addr 0xa904240, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* KeyLengthZero() ;

/// @brief Method KeyNoColumns, addr 0xa9040a4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* KeyNoColumns() ;

/// @brief Method KeyTableMismatch, addr 0xa904064, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* KeyTableMismatch() ;

/// @brief Method KeyTooManyColumns, addr 0xa9040e4, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* KeyTooManyColumns(int32_t  cols) ;

/// @brief Method KeysToString, addr 0xa903184, size 0x118, virtual false, abstract: false, final false
static inline ::StringW KeysToString(::ArrayW<::System::Object*>  keys) ;

/// @brief Method LongerThanMaxLength, addr 0xa8ff97c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* LongerThanMaxLength(::System::Data::DataColumn*  column) ;

/// @brief Method LoopInNestedRelations, addr 0xa9044e0, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* LoopInNestedRelations(::StringW  tableName) ;

/// @brief Method MaxLengthViolationText, addr 0xa9009fc, size 0x48, virtual false, abstract: false, final false
static inline ::StringW MaxLengthViolationText(::StringW  columnName) ;

/// @brief Method MergeFailed, addr 0xa906814, size 0x4, virtual false, abstract: false, final false
static inline ::System::Exception* MergeFailed(::StringW  name) ;

/// @brief Method MergeMissingDefinition, addr 0xa904da0, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* MergeMissingDefinition(::StringW  obj) ;

/// @brief Method MismatchKeyLength, addr 0xa906184, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MismatchKeyLength() ;

/// @brief Method MissingAttribute, addr 0xa905e40, size 0x20, virtual false, abstract: false, final false
static inline ::System::Exception* MissingAttribute(::StringW  attribute) ;

/// @brief Method MissingAttribute, addr 0xa905e60, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* MissingAttribute(::StringW  element, ::StringW  attribute) ;

/// @brief Method MissingRefer, addr 0xa9064c0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MissingRefer(::StringW  name) ;

/// @brief Method MultipleParentRows, addr 0xa906650, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* MultipleParentRows(::StringW  tableQName) ;

/// @brief Method MultipleParents, addr 0xa904c00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MultipleParents() ;

/// @brief Method MultipleTextOnlyColumns, addr 0xa905538, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MultipleTextOnlyColumns() ;

/// @brief Method NamespaceNameConflict, addr 0xa902bb4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* NamespaceNameConflict(::StringW  name) ;

/// @brief Method NeededForForeignKeyConstraint, addr 0xa903544, size 0x88, virtual false, abstract: false, final false
static inline ::System::Exception* NeededForForeignKeyConstraint(::System::Data::UniqueConstraint*  key, ::System::Data::ForeignKeyConstraint*  fk) ;

/// @brief Method NegativeMinimumCapacity, addr 0xa905ca4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NegativeMinimumCapacity() ;

/// @brief Method NestedCircular, addr 0xa906604, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* NestedCircular(::StringW  name) ;

/// @brief Method NoConstraintName, addr 0xa9030f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoConstraintName() ;

/// @brief Method NoCurrentData, addr 0xa904844, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoCurrentData() ;

/// @brief Method NoOriginalData, addr 0xa904884, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoOriginalData() ;

/// @brief Method NoProposedData, addr 0xa9048c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoProposedData() ;

/// @brief Method NoTableName, addr 0xa9054f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoTableName() ;

/// @brief Method NonUniqueValues, addr 0xa8ffa68, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* NonUniqueValues(::StringW  column) ;

/// @brief Method NotAllowDBNullViolationText, addr 0xa900b70, size 0x48, virtual false, abstract: false, final false
static inline ::StringW NotAllowDBNullViolationText(::StringW  columnName) ;

/// @brief Method NotOpen, addr 0xa903dc8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NotOpen() ;

/// @brief Method NullDataType, addr 0xa8fce8c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NullDataType() ;

/// @brief Method NullKeyValues, addr 0xa8ff9d0, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* NullKeyValues(::StringW  column) ;

/// @brief Method NullRange, addr 0xa905c64, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NullRange() ;

/// @brief Method NullValues, addr 0xa8ffa1c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* NullValues(::StringW  column) ;

/// @brief Method ParentOrChildColumnsDoNotHaveDataSet, addr 0xa90456c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ParentOrChildColumnsDoNotHaveDataSet() ;

/// @brief Method ParentTableMismatch, addr 0xa9052e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ParentTableMismatch() ;

/// @brief Method PolymorphismNotSupported, addr 0xa90669c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* PolymorphismNotSupported(::StringW  typeName) ;

/// @brief Method ProblematicChars, addr 0xa905ce4, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Exception* ProblematicChars(char16_t  charValue) ;

/// @brief Method RangeArgument, addr 0xa905bb0, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Exception* RangeArgument(int32_t  min, int32_t  max) ;

/// @brief Method ReadOnly, addr 0xa90398c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* ReadOnly(::StringW  column) ;

/// @brief Method ReadOnlyAndExpression, addr 0xa8fea38, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ReadOnlyAndExpression() ;

/// @brief Method RecordStateRange, addr 0xa904eec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RecordStateRange() ;

/// @brief Method RelationAlreadyExists, addr 0xa904e2c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationAlreadyExists() ;

/// @brief Method RelationAlreadyInOtherDataSet, addr 0xa905084, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationAlreadyInOtherDataSet() ;

/// @brief Method RelationAlreadyInTheDataSet, addr 0xa9050c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationAlreadyInTheDataSet() ;

/// @brief Method RelationChildKeyMissing, addr 0xa9060ac, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationChildKeyMissing(::StringW  rel) ;

/// @brief Method RelationChildNameMissing, addr 0xa906014, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationChildNameMissing(::StringW  rel) ;

/// @brief Method RelationDataSetMismatch, addr 0xa9041c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationDataSetMismatch() ;

/// @brief Method RelationDataSetNull, addr 0xa905260, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationDataSetNull() ;

/// @brief Method RelationDoesNotExist, addr 0xa90452c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationDoesNotExist() ;

/// @brief Method RelationForeignRow, addr 0xa904414, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationForeignRow() ;

/// @brief Method RelationForeignTable, addr 0xa904300, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationForeignTable(::StringW  t1, ::StringW  t2) ;

/// @brief Method RelationNestedReadOnly, addr 0xa904454, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationNestedReadOnly() ;

/// @brief Method RelationNotInTheDataSet, addr 0xa905104, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationNotInTheDataSet(::StringW  relation) ;

/// @brief Method RelationOutOfRange, addr 0xa905150, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* RelationOutOfRange(::System::Object*  index) ;

/// @brief Method RelationParentNameMissing, addr 0xa905fc8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationParentNameMissing(::StringW  rel) ;

/// @brief Method RelationTableKeyMissing, addr 0xa906060, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RelationTableKeyMissing(::StringW  rel) ;

/// @brief Method RelationTableNull, addr 0xa905220, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationTableNull() ;

/// @brief Method RelationTableWasRemoved, addr 0xa9052a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RelationTableWasRemoved() ;

/// @brief Method RemoveExternalObject, addr 0xa903fd8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RemoveExternalObject() ;

/// @brief Method RemoveParentRow, addr 0xa903884, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* RemoveParentRow(::System::Data::ForeignKeyConstraint*  constraint) ;

/// @brief Method RemovePrimaryKey, addr 0xa905008, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* RemovePrimaryKey(::System::Data::DataTable*  table) ;

/// @brief Method RowAlreadyDeleted, addr 0xa904984, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowAlreadyDeleted() ;

/// @brief Method RowAlreadyInOtherCollection, addr 0xa904e6c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowAlreadyInOtherCollection() ;

/// @brief Method RowAlreadyInTheCollection, addr 0xa904eac, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowAlreadyInTheCollection() ;

/// @brief Method RowAlreadyRemoved, addr 0xa904bc0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowAlreadyRemoved() ;

/// @brief Method RowEmpty, addr 0xa9049c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowEmpty() ;

/// @brief Method RowInsertMissing, addr 0xa904b74, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* RowInsertMissing(::StringW  tableName) ;

/// @brief Method RowInsertTwice, addr 0xa904ad4, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* RowInsertTwice(int32_t  index, ::StringW  tableName) ;

/// @brief Method RowNotInTheDataSet, addr 0xa904644, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowNotInTheDataSet() ;

/// @brief Method RowNotInTheTable, addr 0xa904684, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowNotInTheTable() ;

/// @brief Method RowOutOfRange, addr 0xa904a44, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* RowOutOfRange(int32_t  index) ;

/// @brief Method RowRemovedFromTheTable, addr 0xa904904, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RowRemovedFromTheTable() ;

/// @brief Method SelfnestedDatasetConflictingName, addr 0xa90566c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* SelfnestedDatasetConflictingName(::StringW  table) ;

/// @brief Method SetDataSetNameConflicting, addr 0xa904d08, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* SetDataSetNameConflicting(::StringW  name) ;

/// @brief Method SetDataSetNameToEmpty, addr 0xa904cc8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SetDataSetNameToEmpty() ;

/// @brief Method SetFailed, addr 0xa903b7c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* SetFailed(::StringW  name) ;

/// @brief Method SetFailed, addr 0xa8feddc, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Exception* SetFailed(::System::Object*  value, ::System::Data::DataColumn*  column, ::System::Type*  type, ::System::Exception*  innerException) ;

/// @brief Method SetIListObject, addr 0xa903d48, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SetIListObject() ;

/// @brief Method SetParentRowTableMismatch, addr 0xa9043b8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* SetParentRowTableMismatch(::StringW  t1, ::StringW  t2) ;

/// @brief Method SetRowStateFilter, addr 0xa903bc8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SetRowStateFilter() ;

/// @brief Method SetTable, addr 0xa903d08, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SetTable() ;

/// @brief Method SimpleTypeNotSupported, addr 0xa905e00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SimpleTypeNotSupported() ;

/// @brief Method StorageSetFailed, addr 0xa905dc0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* StorageSetFailed() ;

/// @brief Method TableAlreadyInOtherDataSet, addr 0xa905704, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TableAlreadyInOtherDataSet() ;

/// @brief Method TableAlreadyInTheDataSet, addr 0xa905744, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TableAlreadyInTheDataSet() ;

/// @brief Method TableCannotAddToSimpleContent, addr 0xa9054b8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TableCannotAddToSimpleContent() ;

/// @brief Method TableCantBeNestedInTwoTables, addr 0xa904494, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* TableCantBeNestedInTwoTables(::StringW  tableName) ;

/// @brief Method TableForeignPrimaryKey, addr 0xa905478, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TableForeignPrimaryKey() ;

/// @brief Method TableInConstraint, addr 0xa9058a0, size 0x78, virtual false, abstract: false, final false
static inline ::System::Exception* TableInConstraint(::System::Data::DataTable*  table, ::System::Data::Constraint*  constraint) ;

/// @brief Method TableInRelation, addr 0xa905860, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TableInRelation() ;

/// @brief Method TableNotFound, addr 0xa905a18, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* TableNotFound(::StringW  tableName) ;

/// @brief Method TableNotInTheDataSet, addr 0xa905814, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* TableNotInTheDataSet(::StringW  table) ;

/// @brief Method TableOutOfRange, addr 0xa905784, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* TableOutOfRange(int32_t  index) ;

/// @brief Method TablesInDifferentSets, addr 0xa904dec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TablesInDifferentSets() ;

/// @brief Method ThrowDataException, addr 0xa90256c, size 0x50, virtual false, abstract: false, final false
static inline void ThrowDataException(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method ThrowMultipleTargetConverter, addr 0xa906728, size 0x60, virtual false, abstract: false, final false
static inline void ThrowMultipleTargetConverter(::System::Exception*  innerException) ;

/// @brief Method TooManyIsDataSetAtributeInSchema, addr 0xa9065c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TooManyIsDataSetAtributeInSchema() ;

/// @brief Method TraceException, addr 0xa902174, size 0x98, virtual false, abstract: false, final false
static inline void TraceException(::StringW  trace, ::System::Exception*  e) ;

/// @brief Method TraceExceptionAsReturnValue, addr 0xa90220c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TraceExceptionAsReturnValue(::System::Exception*  e) ;

/// @brief Method TraceExceptionForCapture, addr 0xa8fdb64, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TraceExceptionForCapture(::System::Exception*  e) ;

/// @brief Method TraceExceptionWithoutRethrow, addr 0xa8fdda8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TraceExceptionWithoutRethrow(::System::Exception*  e) ;

/// @brief Method TypeNotAllowed, addr 0xa902abc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeNotAllowed(::System::Type*  type) ;

/// @brief Method UDTImplementsIChangeTrackingButnotIRevertible, addr 0xa903ac4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* UDTImplementsIChangeTrackingButnotIRevertible(::StringW  typeName) ;

/// @brief Method UndefinedDatatype, addr 0xa9060f8, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* UndefinedDatatype(::StringW  name) ;

/// @brief Method UniqueAndExpression, addr 0xa8ff430, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* UniqueAndExpression() ;

/// @brief Method UniqueConstraintViolation, addr 0xa9035cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* UniqueConstraintViolation() ;

/// @brief Method UniqueConstraintViolationText, addr 0xa90329c, size 0x170, virtual false, abstract: false, final false
static inline ::StringW UniqueConstraintViolationText(::ArrayW<::System::Data::DataColumn*>  columns, ::ArrayW<::System::Object*>  values) ;

/// @brief Method ValueArrayLength, addr 0xa904804, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ValueArrayLength() ;

/// @brief Method _Argument, addr 0xa90225c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* _Argument(::StringW  error) ;

/// @brief Method _Argument, addr 0xa902314, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* _Argument(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method _Argument, addr 0xa9022b8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* _Argument(::StringW  paramName, ::StringW  error) ;

/// @brief Method _ArgumentNull, addr 0xa902380, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* _ArgumentNull(::StringW  paramName, ::StringW  msg) ;

/// @brief Method _ArgumentOutOfRange, addr 0xa9023ec, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* _ArgumentOutOfRange(::StringW  paramName, ::StringW  msg) ;

/// @brief Method _Constraint, addr 0xa902624, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _Constraint(::StringW  error) ;

/// @brief Method _Data, addr 0xa9025bc, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _Data(::StringW  error) ;

/// @brief Method _DeletedRowInaccessible, addr 0xa9026f4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _DeletedRowInaccessible(::StringW  error) ;

/// @brief Method _DuplicateName, addr 0xa90275c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _DuplicateName(::StringW  error) ;

/// @brief Method _InRowChangingEvent, addr 0xa9027c4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _InRowChangingEvent(::StringW  error) ;

/// @brief Method _IndexOutOfRange, addr 0xa902458, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* _IndexOutOfRange(::StringW  error) ;

/// @brief Method _InvalidConstraint, addr 0xa90268c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _InvalidConstraint(::StringW  error) ;

/// @brief Method _InvalidEnumArgumentException, addr 0xa902510, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* _InvalidEnumArgumentException(::StringW  error) ;

/// @brief Method _InvalidEnumArgumentException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Exception* _InvalidEnumArgumentException(T  value) ;

/// @brief Method _InvalidOperation, addr 0xa9024b4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* _InvalidOperation(::StringW  error) ;

/// @brief Method _NoNullAllowed, addr 0xa90282c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _NoNullAllowed(::StringW  error) ;

/// @brief Method _ReadOnly, addr 0xa902894, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _ReadOnly(::StringW  error) ;

/// @brief Method _RowNotInTable, addr 0xa9028fc, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _RowNotInTable(::StringW  error) ;

/// @brief Method _VersionNotFound, addr 0xa902964, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* _VersionNotFound(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionBuilder(ExceptionBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionBuilder(ExceptionBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::ExceptionBuilder) == 0x10, "Size mismatch!");

} // namespace end def System::Data
