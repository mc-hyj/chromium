// GENERATED FILE
// This file generated by DomDistillerJs protoc plugin.
#include "dom_distiller.pb.h"

// base dependencies
#include "base/values.h"

#include <memory>
#include <string>
#include <utility>

namespace dom_distiller {
  namespace proto {
    namespace json {
      class DistilledContent {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::DistilledContent* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_html(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::DistilledContent& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_html()) {
            dict->SetString("1", message.html());
          }
          return dict;
        }
      };

      class PaginationInfo {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::PaginationInfo* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_next_page(field_value);
          }
          if (dict->HasKey("2")) {
            std::string field_value;
            if (!dict->GetString("2", &field_value)) {
              goto error;
            }
            message->set_prev_page(field_value);
          }
          if (dict->HasKey("3")) {
            std::string field_value;
            if (!dict->GetString("3", &field_value)) {
              goto error;
            }
            message->set_canonical_page(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::PaginationInfo& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_next_page()) {
            dict->SetString("1", message.next_page());
          }
          if (message.has_prev_page()) {
            dict->SetString("2", message.prev_page());
          }
          if (message.has_canonical_page()) {
            dict->SetString("3", message.canonical_page());
          }
          return dict;
        }
      };

      class MarkupArticle {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::MarkupArticle* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_published_time(field_value);
          }
          if (dict->HasKey("2")) {
            std::string field_value;
            if (!dict->GetString("2", &field_value)) {
              goto error;
            }
            message->set_modified_time(field_value);
          }
          if (dict->HasKey("3")) {
            std::string field_value;
            if (!dict->GetString("3", &field_value)) {
              goto error;
            }
            message->set_expiration_time(field_value);
          }
          if (dict->HasKey("4")) {
            std::string field_value;
            if (!dict->GetString("4", &field_value)) {
              goto error;
            }
            message->set_section(field_value);
          }
          if (dict->HasKey("5")) {
            const base::ListValue* field_list;
            if (!dict->GetList("5", &field_list)) {
              goto error;
            }
            for (size_t i = 0; i < field_list->GetSize(); ++i) {
              std::string field_value;
              if (!field_list->GetString(i, &field_value)) {
                goto error;
              }
              message->add_authors(field_value);
            }
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::MarkupArticle& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_published_time()) {
            dict->SetString("1", message.published_time());
          }
          if (message.has_modified_time()) {
            dict->SetString("2", message.modified_time());
          }
          if (message.has_expiration_time()) {
            dict->SetString("3", message.expiration_time());
          }
          if (message.has_section()) {
            dict->SetString("4", message.section());
          }
          {
            base::ListValue* field_list = new base::ListValue();
            dict->Set("5", field_list);
            for (int i = 0; i < message.authors_size(); ++i) {
              field_list->AppendString(message.authors(i));
            }
          }
          return dict;
        }
      };

      class MarkupImage {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::MarkupImage* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_url(field_value);
          }
          if (dict->HasKey("2")) {
            std::string field_value;
            if (!dict->GetString("2", &field_value)) {
              goto error;
            }
            message->set_secure_url(field_value);
          }
          if (dict->HasKey("3")) {
            std::string field_value;
            if (!dict->GetString("3", &field_value)) {
              goto error;
            }
            message->set_type(field_value);
          }
          if (dict->HasKey("4")) {
            std::string field_value;
            if (!dict->GetString("4", &field_value)) {
              goto error;
            }
            message->set_caption(field_value);
          }
          if (dict->HasKey("5")) {
            int field_value;
            if (!dict->GetInteger("5", &field_value)) {
              goto error;
            }
            message->set_width(field_value);
          }
          if (dict->HasKey("6")) {
            int field_value;
            if (!dict->GetInteger("6", &field_value)) {
              goto error;
            }
            message->set_height(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::MarkupImage& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_url()) {
            dict->SetString("1", message.url());
          }
          if (message.has_secure_url()) {
            dict->SetString("2", message.secure_url());
          }
          if (message.has_type()) {
            dict->SetString("3", message.type());
          }
          if (message.has_caption()) {
            dict->SetString("4", message.caption());
          }
          if (message.has_width()) {
            dict->SetInteger("5", message.width());
          }
          if (message.has_height()) {
            dict->SetInteger("6", message.height());
          }
          return dict;
        }
      };

      class MarkupInfo {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::MarkupInfo* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_title(field_value);
          }
          if (dict->HasKey("2")) {
            std::string field_value;
            if (!dict->GetString("2", &field_value)) {
              goto error;
            }
            message->set_type(field_value);
          }
          if (dict->HasKey("3")) {
            std::string field_value;
            if (!dict->GetString("3", &field_value)) {
              goto error;
            }
            message->set_url(field_value);
          }
          if (dict->HasKey("4")) {
            std::string field_value;
            if (!dict->GetString("4", &field_value)) {
              goto error;
            }
            message->set_description(field_value);
          }
          if (dict->HasKey("5")) {
            std::string field_value;
            if (!dict->GetString("5", &field_value)) {
              goto error;
            }
            message->set_publisher(field_value);
          }
          if (dict->HasKey("6")) {
            std::string field_value;
            if (!dict->GetString("6", &field_value)) {
              goto error;
            }
            message->set_copyright(field_value);
          }
          if (dict->HasKey("7")) {
            std::string field_value;
            if (!dict->GetString("7", &field_value)) {
              goto error;
            }
            message->set_author(field_value);
          }
          if (dict->HasKey("8")) {
            const base::Value* inner_message_value;
            if (!dict->Get("8", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::MarkupArticle::ReadFromValue(inner_message_value, message->mutable_article())) {
              goto error;
            }
          }
          if (dict->HasKey("9")) {
            const base::ListValue* field_list;
            if (!dict->GetList("9", &field_list)) {
              goto error;
            }
            for (size_t i = 0; i < field_list->GetSize(); ++i) {
              const base::Value* inner_message_value;
              if (!field_list->Get(i, &inner_message_value)) {
                goto error;
              }
              if (!dom_distiller::proto::json::MarkupImage::ReadFromValue(inner_message_value, message->add_images())) {
                goto error;
              }
            }
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::MarkupInfo& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_title()) {
            dict->SetString("1", message.title());
          }
          if (message.has_type()) {
            dict->SetString("2", message.type());
          }
          if (message.has_url()) {
            dict->SetString("3", message.url());
          }
          if (message.has_description()) {
            dict->SetString("4", message.description());
          }
          if (message.has_publisher()) {
            dict->SetString("5", message.publisher());
          }
          if (message.has_copyright()) {
            dict->SetString("6", message.copyright());
          }
          if (message.has_author()) {
            dict->SetString("7", message.author());
          }
          if (message.has_article()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::MarkupArticle::WriteToValue(message.article());
            dict->Set("8", std::move(inner_message_value));
          }
          {
            base::ListValue* field_list = new base::ListValue();
            dict->Set("9", field_list);
            for (int i = 0; i < message.images_size(); ++i) {
              std::unique_ptr<base::Value> inner_message_value =
                  dom_distiller::proto::json::MarkupImage::WriteToValue(message.images(i));
              field_list->Append(std::move(inner_message_value));
            }
          }
          return dict;
        }
      };

      class TimingEntry {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::TimingEntry* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_name(field_value);
          }
          if (dict->HasKey("2")) {
            double field_value;
            if (!dict->GetDouble("2", &field_value)) {
              goto error;
            }
            message->set_time(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::TimingEntry& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_name()) {
            dict->SetString("1", message.name());
          }
          if (message.has_time()) {
            dict->SetDouble("2", message.time());
          }
          return dict;
        }
      };

      class TimingInfo {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::TimingInfo* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            double field_value;
            if (!dict->GetDouble("1", &field_value)) {
              goto error;
            }
            message->set_markup_parsing_time(field_value);
          }
          if (dict->HasKey("2")) {
            double field_value;
            if (!dict->GetDouble("2", &field_value)) {
              goto error;
            }
            message->set_document_construction_time(field_value);
          }
          if (dict->HasKey("3")) {
            double field_value;
            if (!dict->GetDouble("3", &field_value)) {
              goto error;
            }
            message->set_article_processing_time(field_value);
          }
          if (dict->HasKey("4")) {
            double field_value;
            if (!dict->GetDouble("4", &field_value)) {
              goto error;
            }
            message->set_formatting_time(field_value);
          }
          if (dict->HasKey("5")) {
            double field_value;
            if (!dict->GetDouble("5", &field_value)) {
              goto error;
            }
            message->set_total_time(field_value);
          }
          if (dict->HasKey("6")) {
            const base::ListValue* field_list;
            if (!dict->GetList("6", &field_list)) {
              goto error;
            }
            for (size_t i = 0; i < field_list->GetSize(); ++i) {
              const base::Value* inner_message_value;
              if (!field_list->Get(i, &inner_message_value)) {
                goto error;
              }
              if (!dom_distiller::proto::json::TimingEntry::ReadFromValue(inner_message_value, message->add_other_times())) {
                goto error;
              }
            }
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::TimingInfo& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_markup_parsing_time()) {
            dict->SetDouble("1", message.markup_parsing_time());
          }
          if (message.has_document_construction_time()) {
            dict->SetDouble("2", message.document_construction_time());
          }
          if (message.has_article_processing_time()) {
            dict->SetDouble("3", message.article_processing_time());
          }
          if (message.has_formatting_time()) {
            dict->SetDouble("4", message.formatting_time());
          }
          if (message.has_total_time()) {
            dict->SetDouble("5", message.total_time());
          }
          {
            base::ListValue* field_list = new base::ListValue();
            dict->Set("6", field_list);
            for (int i = 0; i < message.other_times_size(); ++i) {
              std::unique_ptr<base::Value> inner_message_value =
                  dom_distiller::proto::json::TimingEntry::WriteToValue(message.other_times(i));
              field_list->Append(std::move(inner_message_value));
            }
          }
          return dict;
        }
      };

      class DebugInfo {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::DebugInfo* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_log(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::DebugInfo& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_log()) {
            dict->SetString("1", message.log());
          }
          return dict;
        }
      };

      class StatisticsInfo {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::StatisticsInfo* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            int field_value;
            if (!dict->GetInteger("1", &field_value)) {
              goto error;
            }
            message->set_word_count(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::StatisticsInfo& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_word_count()) {
            dict->SetInteger("1", message.word_count());
          }
          return dict;
        }
      };

      class DomDistillerResult {
       public:
        class ContentImage {
         public:
          static bool ReadFromValue(const base::Value* json, dom_distiller::proto::DomDistillerResult::ContentImage* message) {
            const base::DictionaryValue* dict;
            if (!json->GetAsDictionary(&dict)) goto error;
            if (dict->HasKey("1")) {
              std::string field_value;
              if (!dict->GetString("1", &field_value)) {
                goto error;
              }
              message->set_url(field_value);
            }
            return true;

          error:
            return false;
          }

          static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::DomDistillerResult::ContentImage& message) {
            std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
            if (message.has_url()) {
              dict->SetString("1", message.url());
            }
            return dict;
          }
        };

        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::DomDistillerResult* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            std::string field_value;
            if (!dict->GetString("1", &field_value)) {
              goto error;
            }
            message->set_title(field_value);
          }
          if (dict->HasKey("2")) {
            const base::Value* inner_message_value;
            if (!dict->Get("2", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::DistilledContent::ReadFromValue(inner_message_value, message->mutable_distilled_content())) {
              goto error;
            }
          }
          if (dict->HasKey("3")) {
            const base::Value* inner_message_value;
            if (!dict->Get("3", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::PaginationInfo::ReadFromValue(inner_message_value, message->mutable_pagination_info())) {
              goto error;
            }
          }
          if (dict->HasKey("5")) {
            const base::Value* inner_message_value;
            if (!dict->Get("5", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::MarkupInfo::ReadFromValue(inner_message_value, message->mutable_markup_info())) {
              goto error;
            }
          }
          if (dict->HasKey("6")) {
            const base::Value* inner_message_value;
            if (!dict->Get("6", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::TimingInfo::ReadFromValue(inner_message_value, message->mutable_timing_info())) {
              goto error;
            }
          }
          if (dict->HasKey("7")) {
            const base::Value* inner_message_value;
            if (!dict->Get("7", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::DebugInfo::ReadFromValue(inner_message_value, message->mutable_debug_info())) {
              goto error;
            }
          }
          if (dict->HasKey("8")) {
            const base::Value* inner_message_value;
            if (!dict->Get("8", &inner_message_value)) {
              goto error;
            }
            if (!dom_distiller::proto::json::StatisticsInfo::ReadFromValue(inner_message_value, message->mutable_statistics_info())) {
              goto error;
            }
          }
          if (dict->HasKey("9")) {
            std::string field_value;
            if (!dict->GetString("9", &field_value)) {
              goto error;
            }
            message->set_text_direction(field_value);
          }
          if (dict->HasKey("10")) {
            const base::ListValue* field_list;
            if (!dict->GetList("10", &field_list)) {
              goto error;
            }
            for (size_t i = 0; i < field_list->GetSize(); ++i) {
              const base::Value* inner_message_value;
              if (!field_list->Get(i, &inner_message_value)) {
                goto error;
              }
              if (!dom_distiller::proto::json::DomDistillerResult::ContentImage::ReadFromValue(inner_message_value, message->add_content_images())) {
                goto error;
              }
            }
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::DomDistillerResult& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_title()) {
            dict->SetString("1", message.title());
          }
          if (message.has_distilled_content()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::DistilledContent::WriteToValue(message.distilled_content());
            dict->Set("2", std::move(inner_message_value));
          }
          if (message.has_pagination_info()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::PaginationInfo::WriteToValue(message.pagination_info());
            dict->Set("3", std::move(inner_message_value));
          }
          if (message.has_markup_info()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::MarkupInfo::WriteToValue(message.markup_info());
            dict->Set("5", std::move(inner_message_value));
          }
          if (message.has_timing_info()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::TimingInfo::WriteToValue(message.timing_info());
            dict->Set("6", std::move(inner_message_value));
          }
          if (message.has_debug_info()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::DebugInfo::WriteToValue(message.debug_info());
            dict->Set("7", std::move(inner_message_value));
          }
          if (message.has_statistics_info()) {
            std::unique_ptr<base::Value> inner_message_value =
                dom_distiller::proto::json::StatisticsInfo::WriteToValue(message.statistics_info());
            dict->Set("8", std::move(inner_message_value));
          }
          if (message.has_text_direction()) {
            dict->SetString("9", message.text_direction());
          }
          {
            base::ListValue* field_list = new base::ListValue();
            dict->Set("10", field_list);
            for (int i = 0; i < message.content_images_size(); ++i) {
              std::unique_ptr<base::Value> inner_message_value =
                  dom_distiller::proto::json::DomDistillerResult::ContentImage::WriteToValue(message.content_images(i));
              field_list->Append(std::move(inner_message_value));
            }
          }
          return dict;
        }
      };

      class DomDistillerOptions {
       public:
        static bool ReadFromValue(const base::Value* json, dom_distiller::proto::DomDistillerOptions* message) {
          const base::DictionaryValue* dict;
          if (!json->GetAsDictionary(&dict)) goto error;
          if (dict->HasKey("1")) {
            bool field_value;
            if (!dict->GetBoolean("1", &field_value)) {
              goto error;
            }
            message->set_extract_text_only(field_value);
          }
          if (dict->HasKey("2")) {
            int field_value;
            if (!dict->GetInteger("2", &field_value)) {
              goto error;
            }
            message->set_debug_level(field_value);
          }
          if (dict->HasKey("3")) {
            std::string field_value;
            if (!dict->GetString("3", &field_value)) {
              goto error;
            }
            message->set_original_url(field_value);
          }
          if (dict->HasKey("4")) {
            std::string field_value;
            if (!dict->GetString("4", &field_value)) {
              goto error;
            }
            message->set_pagination_algo(field_value);
          }
          return true;

        error:
          return false;
        }

        static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::proto::DomDistillerOptions& message) {
          std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
          if (message.has_extract_text_only()) {
            dict->SetBoolean("1", message.extract_text_only());
          }
          if (message.has_debug_level()) {
            dict->SetInteger("2", message.debug_level());
          }
          if (message.has_original_url()) {
            dict->SetString("3", message.original_url());
          }
          if (message.has_pagination_algo()) {
            dict->SetString("4", message.pagination_algo());
          }
          return dict;
        }
      };

    }
  }
}