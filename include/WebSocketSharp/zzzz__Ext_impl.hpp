#pragma once
// IWYU pragma private; include "WebSocketSharp/Ext.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__Ext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "WebSocketSharp/Net/zzzz__CookieCollection_def.hpp"
#include "WebSocketSharp/zzzz__ByteOrder_def.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_def.hpp"
#include "WebSocketSharp/zzzz__CompressionMethod_def.hpp"
#include "WebSocketSharp/zzzz__Ext_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Ext.compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MemoryStream* (*)(::System::IO::Stream*)>(&::WebSocketSharp::Ext::compress)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb973b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"compress", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::Ext::decompress)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb973ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MemoryStream* (*)(::System::IO::Stream*)>(&::WebSocketSharp::Ext::decompress)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb9741ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompress", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.decompressToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::WebSocketSharp::Ext::decompressToArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb97402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompressToArray", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.isPredefinedScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::WebSocketSharp::Ext::isPredefinedScheme)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb9743b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"isPredefinedScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint16_t, ::StringW)>(&::WebSocketSharp::Ext::Append)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb9745d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::WebSocketSharp::CompressionMethod)>(&::WebSocketSharp::Ext::Compress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb974790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t>)>(&::WebSocketSharp::Ext::Contains)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb974804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Specialized::NameValueCollection*, ::StringW, ::StringW, ::System::StringComparison)>(&::WebSocketSharp::Ext::Contains)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb97483c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ContainsTwice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::WebSocketSharp::Ext::ContainsTwice)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb97494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ContainsTwice", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, int32_t)>(&::WebSocketSharp::Ext::CopyTo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb973dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::WebSocketSharp::CompressionMethod)>(&::WebSocketSharp::Ext::Decompress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb974a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.DecompressToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, ::WebSocketSharp::CompressionMethod)>(&::WebSocketSharp::Ext::DecompressToArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb974ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"DecompressToArray", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::EventHandler*, ::System::Object*, ::System::EventArgs*)>(&::WebSocketSharp::Ext::Emit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb974d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Emit", {}, {::i2c::type_of<::System::EventHandler*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.GetAbsolutePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*)>(&::WebSocketSharp::Ext::GetAbsolutePath)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb974d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetAbsolutePath", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.GetCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::CookieCollection* (*)(::System::Collections::Specialized::NameValueCollection*, bool)>(&::WebSocketSharp::Ext::GetCookies)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb974e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetCookies", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::WebSocketSharp::CloseStatusCode)>(&::WebSocketSharp::Ext::GetMessage)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb975108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetMessage", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.GetUTF8EncodedBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::WebSocketSharp::Ext::GetUTF8EncodedBytes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb9751e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetUTF8EncodedBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, bool)>(&::WebSocketSharp::Ext::GetValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb975214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsCompressionExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::WebSocketSharp::CompressionMethod)>(&::WebSocketSharp::Ext::IsCompressionExtension)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb9753c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsCompressionExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::WebSocketSharp::Ext::IsControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9755cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsControl", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::WebSocketSharp::Ext::IsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9755dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::WebSocketSharp::Opcode)>(&::WebSocketSharp::Ext::IsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9755f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsData", {}, {::i2c::type_of<::WebSocketSharp::Opcode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, char16_t, ::System::Action_1<int32_t>*)>(&::WebSocketSharp::Ext::IsEqualTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb975604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsEqualTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsReserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t)>(&::WebSocketSharp::Ext::IsReserved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb975644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsReserved", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::WebSocketSharp::Ext::IsSupported)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb97566c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsSupported", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::WebSocketSharp::Ext::IsText)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb97571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::WebSocketSharp::Ext::IsToken)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb975840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.MaybeUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::WebSocketSharp::Ext::MaybeUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb9758f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"MaybeUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, int32_t)>(&::WebSocketSharp::Ext::ReadBytes)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb975998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, int64_t, int32_t)>(&::WebSocketSharp::Ext::ReadBytes)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xb975af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ReadBytesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int32_t, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::Ext::ReadBytesAsync)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb975d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytesAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ReadBytesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int64_t, int32_t, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::System::Exception*>*)>(&::WebSocketSharp::Ext::ReadBytesAsync)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb975fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytesAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.SplitHeaderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::ArrayW<char16_t>)>(&::WebSocketSharp::Ext::SplitHeaderValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb976234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"SplitHeaderValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::WebSocketSharp::Ext::ToByteArray)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb974b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint16_t, ::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::ToByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb97470c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint64_t, ::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::ToByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb976310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToExtensionString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::WebSocketSharp::CompressionMethod, ::ArrayW<::StringW>)>(&::WebSocketSharp::Ext::ToExtensionString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb97546c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToExtensionString", {}, {::i2c::type_of<::WebSocketSharp::CompressionMethod>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, ::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::ToUInt16)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb976394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, ::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::ToUInt64)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb9764f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.TryCreateWebSocketUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Uri*>, ::by_ref<::StringW>)>(&::WebSocketSharp::Ext::TryCreateWebSocketUri)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xb976564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryCreateWebSocketUri", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.TryGetUTF8DecodedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::by_ref<::StringW>)>(&::WebSocketSharp::Ext::TryGetUTF8DecodedString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb97699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryGetUTF8DecodedString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.TryGetUTF8EncodedBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<uint8_t>>)>(&::WebSocketSharp::Ext::TryGetUTF8EncodedBytes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb976a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryGetUTF8EncodedBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Unquote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::WebSocketSharp::Ext::Unquote)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb9752e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Unquote", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.Upgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Specialized::NameValueCollection*, ::StringW)>(&::WebSocketSharp::Ext::Upgrades)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb976b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Upgrades", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.WriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t)>(&::WebSocketSharp::Ext::WriteBytes)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb976c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"WriteBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsEnclosedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, char16_t)>(&::WebSocketSharp::Ext::IsEnclosedIn)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb976db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsEnclosedIn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsHostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::IsHostOrder)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb976304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsHostOrder", {}, {::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.IsNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::WebSocketSharp::Ext::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb976e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToHostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::WebSocketSharp::ByteOrder)>(&::WebSocketSharp::Ext::ToHostOrder)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb976404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToHostOrder", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext.ToUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::WebSocketSharp::Ext::ToUri)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb9768e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WebSocketSharp::Ext::setStaticF__last(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_last", ::WebSocketSharp::Ext*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::getStaticF__last()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_last", ::WebSocketSharp::Ext*>();
}
inline void WebSocketSharp::Ext::setStaticF__maxRetry(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_maxRetry", ::WebSocketSharp::Ext*>(std::forward<int32_t>(value));
}
inline int32_t WebSocketSharp::Ext::getStaticF__maxRetry()  {
return ::cordl_internals::getStaticField<int32_t, "_maxRetry", ::WebSocketSharp::Ext*>();
}
inline ::System::IO::MemoryStream* WebSocketSharp::Ext::compress(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"compress", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*>(nullptr, ___internal_method, stream);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::decompress(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline ::System::IO::MemoryStream* WebSocketSharp::Ext::decompress(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompress", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*>(nullptr, ___internal_method, stream);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::decompressToArray(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"decompressToArray", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream);
}
inline bool WebSocketSharp::Ext::isPredefinedScheme(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"isPredefinedScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::Append(uint16_t  code, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, code, reason);
}
inline ::System::IO::Stream* WebSocketSharp::Ext::Compress(::System::IO::Stream*  stream, ::WebSocketSharp::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, stream, method);
}
inline bool WebSocketSharp::Ext::Contains(::StringW  value, /* [ParamArray] */ ::ArrayW<char16_t>  anyOf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, anyOf);
}
inline bool WebSocketSharp::Ext::Contains(::System::Collections::Specialized::NameValueCollection*  collection, ::StringW  name, ::StringW  value, ::System::StringComparison  comparisonTypeForValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collection, name, value, comparisonTypeForValue);
}
template<typename T>
inline bool WebSocketSharp::Ext::Contains(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,bool>*  condition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"Contains", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, condition);
}
inline bool WebSocketSharp::Ext::ContainsTwice(::ArrayW<::StringW>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ContainsTwice", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, values);
}
inline void WebSocketSharp::Ext::CopyTo(::System::IO::Stream*  sourceStream, ::System::IO::Stream*  destinationStream, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceStream, destinationStream, bufferLength);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::Decompress(::ArrayW<uint8_t>  data, ::WebSocketSharp::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data, method);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::DecompressToArray(::System::IO::Stream*  stream, ::WebSocketSharp::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"DecompressToArray", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream, method);
}
inline void WebSocketSharp::Ext::Emit(::System::EventHandler*  eventHandler, ::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Emit", {}, {::i2c::type_of<::System::EventHandler*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventHandler, sender, e);
}
template<typename TEventArgs>
requires(::cordl_internals::type_constraint<TEventArgs, ::System::EventArgs*>)
inline void WebSocketSharp::Ext::Emit(::System::EventHandler_1<TEventArgs>*  eventHandler, ::System::Object*  sender, TEventArgs  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"Emit", {::i2c::class_of<TEventArgs>()}, {::i2c::type_of<::System::EventHandler_1<TEventArgs>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<TEventArgs>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventArgs>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventHandler, sender, e);
}
inline ::StringW WebSocketSharp::Ext::GetAbsolutePath(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetAbsolutePath", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, uri);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::Ext::GetCookies(::System::Collections::Specialized::NameValueCollection*  headers, bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetCookies", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::CookieCollection*>(nullptr, ___internal_method, headers, response);
}
inline ::StringW WebSocketSharp::Ext::GetMessage(::WebSocketSharp::CloseStatusCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetMessage", {}, {::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, code);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::GetUTF8EncodedBytes(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetUTF8EncodedBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::StringW WebSocketSharp::Ext::GetValue(::StringW  nameAndValue, char16_t  separator, bool  unquote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, nameAndValue, separator, unquote);
}
inline bool WebSocketSharp::Ext::IsCompressionExtension(::StringW  value, ::WebSocketSharp::CompressionMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsCompressionExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, method);
}
inline bool WebSocketSharp::Ext::IsControl(uint8_t  opcode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsControl", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, opcode);
}
inline bool WebSocketSharp::Ext::IsData(uint8_t  opcode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, opcode);
}
inline bool WebSocketSharp::Ext::IsData(::WebSocketSharp::Opcode  opcode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsData", {}, {::i2c::type_of<::WebSocketSharp::Opcode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, opcode);
}
inline bool WebSocketSharp::Ext::IsEqualTo(int32_t  value, char16_t  c, ::System::Action_1<int32_t>*  beforeComparing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsEqualTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, c, beforeComparing);
}
inline bool WebSocketSharp::Ext::IsReserved(uint16_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsReserved", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code);
}
inline bool WebSocketSharp::Ext::IsSupported(uint8_t  opcode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsSupported", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, opcode);
}
inline bool WebSocketSharp::Ext::IsText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool WebSocketSharp::Ext::IsToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool WebSocketSharp::Ext::MaybeUri(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"MaybeUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ReadBytes(::System::IO::Stream*  stream, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream, length);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ReadBytes(::System::IO::Stream*  stream, int64_t  length, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream, length, bufferLength);
}
inline void WebSocketSharp::Ext::ReadBytesAsync(::System::IO::Stream*  stream, int32_t  length, ::System::Action_1<::ArrayW<uint8_t>>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytesAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, length, completed, error);
}
inline void WebSocketSharp::Ext::ReadBytesAsync(::System::IO::Stream*  stream, int64_t  length, int32_t  bufferLength, ::System::Action_1<::ArrayW<uint8_t>>*  completed, ::System::Action_1<::System::Exception*>*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ReadBytesAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, length, bufferLength, completed, error);
}
template<typename T>
inline ::ArrayW<T> WebSocketSharp::Ext::Reverse(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"Reverse", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* WebSocketSharp::Ext::SplitHeaderValue(::StringW  value, /* [ParamArray] */ ::ArrayW<char16_t>  separators)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"SplitHeaderValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, value, separators);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ToByteArray(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ToByteArray(uint16_t  value, ::WebSocketSharp::ByteOrder  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value, order);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ToByteArray(uint64_t  value, ::WebSocketSharp::ByteOrder  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToByteArray", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value, order);
}
inline ::StringW WebSocketSharp::Ext::ToExtensionString(::WebSocketSharp::CompressionMethod  method, /* [ParamArray] */ ::ArrayW<::StringW>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToExtensionString", {}, {::i2c::type_of<::WebSocketSharp::CompressionMethod>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, method, parameters);
}
template<typename TSource>
inline ::System::Collections::Generic::List_1<TSource>* WebSocketSharp::Ext::ToList(::System::Collections::Generic::IEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"ToList", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TSource>*>(nullptr, ___internal_method, source);
}
inline uint16_t WebSocketSharp::Ext::ToUInt16(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, source, sourceOrder);
}
inline uint64_t WebSocketSharp::Ext::ToUInt64(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, source, sourceOrder);
}
inline bool WebSocketSharp::Ext::TryCreateWebSocketUri(::StringW  uriString, ::by_ref<::System::Uri*>  result, ::by_ref<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryCreateWebSocketUri", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uriString, result, message);
}
inline bool WebSocketSharp::Ext::TryGetUTF8DecodedString(::ArrayW<uint8_t>  bytes, ::by_ref<::StringW>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryGetUTF8DecodedString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bytes, s);
}
inline bool WebSocketSharp::Ext::TryGetUTF8EncodedBytes(::StringW  s, ::by_ref<::ArrayW<uint8_t>>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"TryGetUTF8EncodedBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, bytes);
}
inline ::StringW WebSocketSharp::Ext::Unquote(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Unquote", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline bool WebSocketSharp::Ext::Upgrades(::System::Collections::Specialized::NameValueCollection*  headers, ::StringW  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"Upgrades", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, headers, protocol);
}
inline void WebSocketSharp::Ext::WriteBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  bytes, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"WriteBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, bytes, bufferLength);
}
inline bool WebSocketSharp::Ext::IsEnclosedIn(::StringW  value, char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsEnclosedIn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, c);
}
inline bool WebSocketSharp::Ext::IsHostOrder(::WebSocketSharp::ByteOrder  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsHostOrder", {}, {::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, order);
}
inline bool WebSocketSharp::Ext::IsNullOrEmpty(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template<typename T>
inline ::ArrayW<T> WebSocketSharp::Ext::SubArray(::ArrayW<T>  array, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"SubArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, startIndex, length);
}
template<typename T>
inline ::ArrayW<T> WebSocketSharp::Ext::SubArray(::ArrayW<T>  array, int64_t  startIndex, int64_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"SubArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, startIndex, length);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Ext::ToHostOrder(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToHostOrder", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::WebSocketSharp::ByteOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source, sourceOrder);
}
template<typename T>
inline ::StringW WebSocketSharp::Ext::ToString(::ArrayW<T>  array, ::StringW  separator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Ext*>(),
                    {"ToString", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, array, separator);
}
inline ::System::Uri* WebSocketSharp::Ext::ToUri(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext*>(),
                        {"ToUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext::Ext()   {
}
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)(int32_t)>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb9762c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb9776cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb9776d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_Collections_Generic_IEnumerator_System_String__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb977918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb977920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb977958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb977960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext__SplitHeaderValue_d__58.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WebSocketSharp::Ext__SplitHeaderValue_d__58::*)()>(&::WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb977a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::StringW& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::StringW const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set___2__current(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::StringW& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr ::StringW& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___3__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__value;
}
constexpr ::StringW const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___3__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__value;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set___3__value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__value = value;
}
constexpr ::ArrayW<char16_t>& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get_separators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separators;
}
constexpr ::ArrayW<char16_t> const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get_separators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separators;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set_separators(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___separators = value;
}
constexpr ::ArrayW<char16_t>& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___3__separators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__separators;
}
constexpr ::ArrayW<char16_t> const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get___3__separators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__separators;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set___3__separators(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__separators = value;
}
constexpr int32_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__len_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____len_5__1;
}
constexpr int32_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__len_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____len_5__1;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__len_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____len_5__1 = value;
}
constexpr int32_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__end_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end_5__2;
}
constexpr int32_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__end_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end_5__2;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__end_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____end_5__2 = value;
}
constexpr ::System::Text::StringBuilder*& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__buff_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buff_5__3;
}
constexpr ::System::Text::StringBuilder* const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__buff_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buff_5__3;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__buff_5__3(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buff_5__3 = value;
}
constexpr bool& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__escaped_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____escaped_5__4;
}
constexpr bool const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__escaped_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____escaped_5__4;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__escaped_5__4(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____escaped_5__4 = value;
}
constexpr bool& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__quoted_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoted_5__5;
}
constexpr bool const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__quoted_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quoted_5__5;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__quoted_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____quoted_5__5 = value;
}
constexpr int32_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__i_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__6;
}
constexpr int32_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__i_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__6;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__i_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__6 = value;
}
constexpr char16_t& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__c_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__7;
}
constexpr char16_t const& WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_get__c_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____c_5__7;
}
constexpr void WebSocketSharp::Ext__SplitHeaderValue_d__58::__cordl_internal_set__c_5__7(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____c_5__7 = value;
}
inline void WebSocketSharp::Ext__SplitHeaderValue_d__58::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void WebSocketSharp::Ext__SplitHeaderValue_d__58::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::Ext__SplitHeaderValue_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_Generic_IEnumerator_System_String__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_Generic_IEnumerable_System_String__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* WebSocketSharp::Ext__SplitHeaderValue_d__58::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::WebSocketSharp::Ext__SplitHeaderValue_d__58* WebSocketSharp::Ext__SplitHeaderValue_d__58::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Ext__SplitHeaderValue_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr  WebSocketSharp::Ext__SplitHeaderValue_d__58::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* WebSocketSharp::Ext__SplitHeaderValue_d__58::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  WebSocketSharp::Ext__SplitHeaderValue_d__58::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* WebSocketSharp::Ext__SplitHeaderValue_d__58::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr  WebSocketSharp::Ext__SplitHeaderValue_d__58::operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* WebSocketSharp::Ext__SplitHeaderValue_d__58::i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  WebSocketSharp::Ext__SplitHeaderValue_d__58::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* WebSocketSharp::Ext__SplitHeaderValue_d__58::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  WebSocketSharp::Ext__SplitHeaderValue_d__58::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* WebSocketSharp::Ext__SplitHeaderValue_d__58::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext__SplitHeaderValue_d__58::Ext__SplitHeaderValue_d__58()   {
}
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass56_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass56_1::*)()>(&::WebSocketSharp::Ext___c__DisplayClass56_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9772fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass56_1._ReadBytesAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass56_1::*)(::System::IAsyncResult*)>(&::WebSocketSharp::Ext___c__DisplayClass56_1::_ReadBytesAsync_b__1)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xb977304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_1*>(),
                        {"<ReadBytesAsync>b__1", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int64_t const& WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_set_len(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::WebSocketSharp::Ext___c__DisplayClass56_0*& WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::WebSocketSharp::Ext___c__DisplayClass56_0* const& WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_1::__cordl_internal_set_CS$__8__locals1(::WebSocketSharp::Ext___c__DisplayClass56_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void WebSocketSharp::Ext___c__DisplayClass56_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::Ext___c__DisplayClass56_1::_ReadBytesAsync_b__1(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_1*>(),
                        {"<ReadBytesAsync>b__1", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::WebSocketSharp::Ext___c__DisplayClass56_1* WebSocketSharp::Ext___c__DisplayClass56_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Ext___c__DisplayClass56_1*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext___c__DisplayClass56_1::Ext___c__DisplayClass56_1()   {
}
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass56_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass56_0::*)()>(&::WebSocketSharp::Ext___c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass56_0._ReadBytesAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass56_0::*)(int64_t)>(&::WebSocketSharp::Ext___c__DisplayClass56_0::_ReadBytesAsync_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb9771f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_0*>(),
                        {"<ReadBytesAsync>b__0", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_bufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferLength;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_bufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferLength;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_bufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferLength = value;
}
constexpr ::System::IO::Stream*& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_buff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_buff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_buff(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buff = value;
}
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_retry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retry;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_retry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retry;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_retry(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retry = value;
}
constexpr ::System::Action_1<int64_t>*& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_read()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read;
}
constexpr ::System::Action_1<int64_t>* const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_read() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_read(::System::Action_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_completed(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::System::IO::MemoryStream*& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_dest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dest;
}
constexpr ::System::IO::MemoryStream* const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_dest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dest;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_dest(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dest = value;
}
constexpr ::System::Action_1<::System::Exception*>*& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::System::Action_1<::System::Exception*>* const& WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass56_0::__cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void WebSocketSharp::Ext___c__DisplayClass56_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::Ext___c__DisplayClass56_0::_ReadBytesAsync_b__0(int64_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass56_0*>(),
                        {"<ReadBytesAsync>b__0", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, len);
}
inline ::WebSocketSharp::Ext___c__DisplayClass56_0* WebSocketSharp::Ext___c__DisplayClass56_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Ext___c__DisplayClass56_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext___c__DisplayClass56_0::Ext___c__DisplayClass56_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass55_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass55_0::*)()>(&::WebSocketSharp::Ext___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb975fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass55_0._ReadBytesAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass55_0::*)(::System::IAsyncResult*)>(&::WebSocketSharp::Ext___c__DisplayClass55_0::_ReadBytesAsync_b__0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb976f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass55_0*>(),
                        {"<ReadBytesAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_retry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retry;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_retry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retry;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_retry(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retry = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_ret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ret;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_ret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ret;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_ret(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ret = value;
}
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr ::System::AsyncCallback*& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::AsyncCallback* const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_callback(::System::AsyncCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_completed(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::System::Action_1<::System::Exception*>*& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::System::Action_1<::System::Exception*>* const& WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass55_0::__cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void WebSocketSharp::Ext___c__DisplayClass55_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::Ext___c__DisplayClass55_0::_ReadBytesAsync_b__0(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass55_0*>(),
                        {"<ReadBytesAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::WebSocketSharp::Ext___c__DisplayClass55_0* WebSocketSharp::Ext___c__DisplayClass55_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Ext___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext___c__DisplayClass55_0::Ext___c__DisplayClass55_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Ext___c__DisplayClass18_0::*)()>(&::WebSocketSharp::Ext___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb974a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Ext___c__DisplayClass18_0._ContainsTwice_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Ext___c__DisplayClass18_0::*)(int32_t)>(&::WebSocketSharp::Ext___c__DisplayClass18_0::_ContainsTwice_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb976ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass18_0*>(),
                        {"<ContainsTwice>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_set_end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr ::ArrayW<::StringW>& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr ::ArrayW<::StringW> const& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_set_values(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___values = value;
}
constexpr int32_t& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int32_t const& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_set_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::System::Func_2<int32_t,bool>*& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_seek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seek;
}
constexpr ::System::Func_2<int32_t,bool>* const& WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_get_seek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seek;
}
constexpr void WebSocketSharp::Ext___c__DisplayClass18_0::__cordl_internal_set_seek(::System::Func_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seek = value;
}
inline void WebSocketSharp::Ext___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::Ext___c__DisplayClass18_0::_ContainsTwice_b__0(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Ext___c__DisplayClass18_0*>(),
                        {"<ContainsTwice>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx);
}
inline ::WebSocketSharp::Ext___c__DisplayClass18_0* WebSocketSharp::Ext___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Ext___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Ext___c__DisplayClass18_0::Ext___c__DisplayClass18_0()   {
}
