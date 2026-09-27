#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterDynHeader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterDynHeader_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__StreamManipulator_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterDynHeader_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterHuffmanTree_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader.AttemptRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::AttemptRead)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9fd77e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"AttemptRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::*)(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fd75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader.CreateStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<bool>* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::CreateStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fd8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"CreateStateMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader.get_LiteralLengthTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::get_LiteralLengthTree)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fd7910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"get_LiteralLengthTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader.get_DistanceTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::get_DistanceTree)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fd7968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"get_DistanceTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_input(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<bool>*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::System::Collections::Generic::IEnumerator_1<bool>* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_state(::System::Collections::Generic::IEnumerator_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<bool>*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
constexpr ::System::Collections::Generic::IEnumerable_1<bool>* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_stateMachine(::System::Collections::Generic::IEnumerable_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateMachine = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_codeLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeLengths;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_codeLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeLengths;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_codeLengths(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codeLengths = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_litLenTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litLenTree;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_litLenTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litLenTree;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_litLenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___litLenTree = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_distTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distTree;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_distTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distTree;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_distTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distTree = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_litLenCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litLenCodeCount;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_litLenCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litLenCodeCount;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_litLenCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___litLenCodeCount = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_distanceCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceCodeCount;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_distanceCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceCodeCount;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_distanceCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceCodeCount = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_metaCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaCodeCount;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_get_metaCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaCodeCount;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::__cordl_internal_set_metaCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metaCodeCount = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::setStaticF_MetaCodeLengthIndex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "MetaCodeLengthIndex", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::getStaticF_MetaCodeLengthIndex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MetaCodeLengthIndex", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>();
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::AttemptRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"AttemptRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::System::Collections::Generic::IEnumerable_1<bool>* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::CreateStateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"CreateStateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<bool>*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::get_LiteralLengthTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"get_LiteralLengthTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::get_DistanceTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(),
                        {"get_DistanceTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*>(input));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader::InflaterDynHeader()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fd84d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fd85a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x9fd85a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_Collections_Generic_IEnumerator_System_Boolean__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_Generic_IEnumerator_System_Boolean__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd8da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Boolean>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fd8dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fd8de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<bool>* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fd8e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fd8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set___2__current(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set___4__this(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__dataCodeCount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataCodeCount_5__2;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__dataCodeCount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataCodeCount_5__2;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set__dataCodeCount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataCodeCount_5__2 = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__metaCodeTree_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaCodeTree_5__3;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__metaCodeTree_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metaCodeTree_5__3;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set__metaCodeTree_5__3(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metaCodeTree_5__3 = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__index_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_5__4;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__index_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_5__4;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set__index_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index_5__4 = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__i_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__i_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set__i_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__5 = value;
}
constexpr uint8_t& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__codeLength_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLength_5__6;
}
constexpr uint8_t const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_get__codeLength_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLength_5__6;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::__cordl_internal_set__codeLength_5__6(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codeLength_5__6 = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_Generic_IEnumerator_System_Boolean__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Boolean>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<bool>* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<bool>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr  ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::operator ::System::Collections::Generic::IEnumerable_1<bool>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr ::System::Collections::Generic::IEnumerable_1<bool>* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::i___System__Collections__Generic__IEnumerable_1_bool_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr  ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::operator ::System::Collections::Generic::IEnumerator_1<bool>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr ::System::Collections::Generic::IEnumerator_1<bool>* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::i___System__Collections__Generic__IEnumerator_1_bool_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7::InflaterDynHeader__CreateStateMachine_d__7()   {
}
